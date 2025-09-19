import re

files = ["include/libforest/gbi_extensions.h", "include/PR/gbi.h"]

defines = "#ifdef LITTLE_ENDIAN\n"
result = ""
for file in files:
    with open(file, 'r') as f:
        content = f.read();
    # Remove comments
    content = re.sub(r"//.*$|/\*[\s\S]*?\*/", "", content)

    for struct in re.findall(r"typedef\s+struct\s*\w*\s*{([^}]*)}\s*(G\w*);", content):
        lines = struct[0].strip().splitlines()
        struct_name = struct[1]
        bit_count = 0
        temp = ""
        result += "\ntypedef struct {\n"
        for line in lines:
            line = line.strip()
            if not line:
                continue
            field = re.findall(r"([\w\s]*)\s+([\w\d]*)\s*(?::\s*(\d*))?;", line)
            if not field:
                print("Warning: " + struct_name)
                continue
            field = field[0]
            type = field[0].strip()
            name = field[1].strip()
            bits = field[2].strip()
            if not bits:
                temp = f"\t{type} {name};\n{temp}"
                if "long" in type or "int" in type:
                    bit_count += 32
                elif "short" in type:
                    bit_count += 16
                elif "char" in type:
                    bit_count += 8
                else:
                    print(f"Unrecognized type '{type}' in '{struct_name}'. Manual editing is required.")
                    continue
            else:
                temp = f"\t{type} {name}:{bits};\n{temp}"
                bit_count += int(bits)
            if bit_count >= 32:
                if bit_count > 32:
                    raise Exception("Failed: " + line)
                bit_count = 0
                result += temp + "\n"
                temp = ""
        result += temp
        result = result.strip() + "\n"
        result += "} PC_" + struct_name + ";\n"
        defines += f"#define {struct_name} PC_{struct_name}\n"
defines += "#endif\n\n"

with open("gbi_pc.h", "w") as f:
    f.write('#ifndef _GBI_PC_H\n#define _GBI_PC_H\n\n#include "pc/big_endian.h"\n\n')
    f.write(defines)
    f.write(result)
    f.write("\n#endif\n")