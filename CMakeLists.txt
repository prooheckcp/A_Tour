cmake_minimum_required(VERSION 4.0)

project(A_Tour)

set(CMAKE_CXX_STANDARD 23)

if(APPLE AND CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(HOMEBREW_LLVM_PREFIX "/opt/homebrew/opt/llvm")

    add_compile_options("-stdlib=libc++" "-isystem" "${HOMEBREW_LLVM_PREFIX}/include")
    add_link_options("-stdlib=libc++" "-L${HOMEBREW_LLVM_PREFIX}/lib" "-Wl,-rpath,${HOMEBREW_LLVM_PREFIX}/lib")
endif()

add_executable(
        A_Tour
        III_Modularity/structuredBinding.cpp
)

target_sources(A_Tour
        PUBLIC
        FILE_SET CXX_MODULES FILES
        III_Modularity/Modules/Vector.cppm
)