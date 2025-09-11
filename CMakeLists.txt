cmake_minimum_required(VERSION 3.24)
project(animal_crossing LANGUAGES C CXX)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_EXTENSIONS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS ON)

set(INCLUDE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/dolphin"
        #"${CMAKE_CURRENT_SOURCE_DIR}/include/libc"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/static/dolphin"
        "${CMAKE_CURRENT_SOURCE_DIR}/build/GAFE01_00/include"
)
set(DEFINES VERSION=0 DEBUG=0 NDEBUG _LANGUAGE_C F3DEX_GBI_2 _ALLOW_KEYWORD_MACROS)

set(OPTIONS -w -fno-short-enums -fpermissive)
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(OPTIONS ${OPTIONS} -Wno-register -Wno-narrowing -Wno-incompatible-function-pointer-types -Wno-return-mismatch)
endif ()

# Must compile for 32 bit
# -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
# -DDAWN_USE_WINDOWS_UI=OFF -DDAWN_ENABLE_D3D11=OFF -DDAWN_ENABLE_D3D12=OFF -DDAWN_ENABLE_VULKAN=ON
add_subdirectory(pc/aurora)
include(cmake/ac_libs.cmake)

add_executable(${PROJECT_NAME}
        src/pc/main.c
        src/pc/wrapper.c
        src/pc/vi.c
        src/pc/gx.c
        src/pc/mtx.c)
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE})
target_compile_definitions(${PROJECT_NAME} PRIVATE ${DEFINES})
target_compile_options(${PROJECT_NAME} PRIVATE ${OPTIONS})

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_link_libraries(${PROJECT_NAME} PRIVATE ${AC_LIBS})
else ()
    target_link_libraries(${PROJECT_NAME} PRIVATE "$<LINK_GROUP:RESCAN,${AC_LIBS}>")
endif ()

target_link_libraries(${PROJECT_NAME} PRIVATE aurora::core aurora::gx aurora::mtx aurora::pad aurora::si aurora::vi)