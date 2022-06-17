
#include "first_app.hpp"

using namespace lve;

FirstApp::FirstApp() : WIDTH{800}, HEIGHT{600}, lveWindow{800, 600, "Hello Vulkan!!"} 
{

}

void FirstApp::run() 
{
    std::cout << "I'm running!!\n";

    while(lveWindow.shouldClose())
    {
        glfwPollEvents();
    }



}



