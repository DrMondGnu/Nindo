cmake_minimum_required(VERSION 3.27)
project(Nindo)

set(CMAKE_CXX_STANDARD 23)
add_subdirectory(libs/mondengine)

add_executable(Nindo main.cpp
        player.cpp
        player.h
        test_object.cpp
        test_object.h)

target_link_libraries(Nindo PRIVATE MondEngine)

get_target_property(NINDO_BINARY_DIR Nindo BINARY_DIR)

add_custom_target(Copy_MondEngine_Dll
        COMMAND ${CMAKE_COMMAND} -E copy ${MOND_ENGINE_DLL} ${NINDO_BINARY_DIR}
        COMMAND ${CMAKE_COMMAND} -E echo "Copying MondEngine dll"
        DEPENDS MondEngine)
add_dependencies(Nindo Copy_MondEngine_Dll)
copy_dlls_to_target(Nindo "${MOND_ENGINE_REQUIRED_DLLS}")