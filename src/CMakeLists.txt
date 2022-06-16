
include_directories(
    /usr/local/include
    /usr/local/include/vulkan
    /usr/local/Cellar/glfw/3.3.7/include
    /usr/local/Cellar/glm/0.9.9.8/include
)

link_directories(
    /usr/local/lib
    /usr/local/Cellar/glfw/3.3.7/lib
)

link_libraries(glfw vulkan)

# set_property(TARGET main )
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test_window)
add_subdirectory(lve_window)



