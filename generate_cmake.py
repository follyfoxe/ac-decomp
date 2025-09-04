#!/usr/bin/env python3

###
# Generates CMakeLists based on the libraries defined in configure.py
#
# Usage:
#   python3 generate_cmake.py
#
###

print("Loading configuration...")
from configure import config

print("Configuration loaded")
for lib in config.libs:
    src_dir = "src"
    if "src_dir" in lib:
        src_dir = lib["src_dir"]
    lib_name = lib["lib"]
    if lib_name == "boot":
        continue
    file_path = f"cmake/libs/{lib_name}.cmake"
    with open(file_path, "w") as f:
        f.write("# auto-generated file\n")
        f.write(f"add_library({lib_name} STATIC")
        for obj in lib["objects"]:
            f.write(f"\n\t\t\"{src_dir}/{obj.name}\"")
        f.write(")\n")
        f.write("target_include_directories(" + lib_name + " PRIVATE ${INCLUDE})\n")
        f.write("target_compile_definitions(" + lib_name + " PRIVATE ${DEFINES})\n")
        f.write("target_compile_options(" + lib_name + " PRIVATE ${OPTIONS})\n")
    print("Generated: " + file_path)