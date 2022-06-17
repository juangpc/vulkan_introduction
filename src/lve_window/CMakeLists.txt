set (sources
    main.cpp
    first_app.cpp
    lve_window.cpp
)

add_executable(lve_window ${sources})

target_link_libraries(lve_window glfw)
target_link_libraries(lve_window ${Vulkan_LIBRARIES})
