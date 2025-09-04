import json

with open("GAFE01_00.json", "r") as f:
    report = json.load(f)

mod = ""
for unit in report["units"]:
    name = unit["name"]
    metadata = unit["metadata"]
    progress_categories = metadata["progress_categories"]
    if not "game" in progress_categories:
        continue
    if "module_name" in metadata:
        module_name = metadata["module_name"]
        source_path = metadata["source_path"]
        if mod != module_name:
            mod = module_name
            print("\n[" + mod + "]")
        print('"' + source_path + '"')
    else:
        mod = name
        print(name + ": " + metadata)