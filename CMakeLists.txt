cmake_minimum_required(VERSION 3.16.5)
project(cpp_primer_plus_6_cases)

set(CMAKE_CXX_STANDARD 14)

file (GLOB files chapter_*/*.cpp others/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
