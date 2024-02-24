#include <iostream>

#include "engine/log.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    mondengine::Log::init();
    APP_INFO("Hello from spdlog");
    return 0;
}
