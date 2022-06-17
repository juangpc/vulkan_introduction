

#include "lve_window.hpp"

#include <utility>

namespace lve {

LveWindow::LveWindow(int w, int h, std::string  name)
: width{w}, height{h}, windowName{std::move(name)}, window{nullptr}
{
    initWindow();
}

LveWindow::~LveWindow() 
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

void LveWindow::initWindow() 
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}

bool LveWindow::shouldClose()
{
    return glfwWindowShouldClose(window);
}

}