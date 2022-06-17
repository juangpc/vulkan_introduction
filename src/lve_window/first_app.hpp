#pragma once

#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "lve_window.hpp"

namespace lve {

class FirstApp 
{
public:
    FirstApp();

    FirstApp(const int width);

    const int WIDTH;
    const int HEIGHT;

    void run();

private: 
    LveWindow lveWindow;
    
};

}
