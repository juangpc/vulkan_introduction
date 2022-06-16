find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)

# set_property(TARGET main )
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test_window)
add_subdirectory(lve_window)



