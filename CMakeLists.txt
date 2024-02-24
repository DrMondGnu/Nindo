cmake_minimum_required(VERSION 3.27)
project(Nindo)

set(CMAKE_CXX_STANDARD 23)
add_subdirectory(libs/mondengine)

add_executable(Nindo main.cpp)

target_link_libraries(Nindo PRIVATE MondEngine)

copy_dlls_to_target(Nindo "${MOND_ENGINE_REQUIRED_DLLS}")