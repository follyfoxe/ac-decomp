# auto-generated file
add_library(Runtime.PPCEABI.H STATIC
		"src/static/Runtime.PPCEABI.H/__init_cpp_exceptions.cpp"
		"src/static/Runtime.PPCEABI.H/__mem.c"
		"src/static/Runtime.PPCEABI.H/__va_arg.c"
		"src/static/Runtime.PPCEABI.H/CPlusLibPPC.cp"
		"src/static/Runtime.PPCEABI.H/Gecko_ExceptionPPC.cp"
		"src/static/Runtime.PPCEABI.H/global_destructor_chain.c"
		"src/static/Runtime.PPCEABI.H/NMWException.cp"
		"src/static/Runtime.PPCEABI.H/ptmf.c"
		"src/static/Runtime.PPCEABI.H/runtime.c")
target_include_directories(Runtime.PPCEABI.H PRIVATE ${INCLUDE})
target_compile_definitions(Runtime.PPCEABI.H PRIVATE ${DEFINES})
target_compile_options(Runtime.PPCEABI.H PRIVATE ${OPTIONS})
