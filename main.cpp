#include <iostream>

#include "engine/log.h"
#include "engine/engine.h"

void start_engine()
{
    mondengine::Log::init();
    APP_INFO("Hello from spdlog");
    auto* engine = new mondengine::Engine();
    free(engine);
}


int main()
{
    start_engine();
    return 0;
}
