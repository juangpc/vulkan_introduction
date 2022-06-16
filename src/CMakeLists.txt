find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)

# set_property(TARGET main )
set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/out)

add_subdirectory(test_window)
add_subdirectory(lve_window)





