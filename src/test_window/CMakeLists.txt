add_executable(test_window main.cpp)

target_link_libraries(test_window glfw)
target_link_libraries(test_window ${Vulkan_LIBRARIES})