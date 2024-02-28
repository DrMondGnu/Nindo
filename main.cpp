#include <iostream>

#include "engine/log.h"
#include "engine/engine.h"

struct Test {
    const char* name;
};

void event_callback(Test* test) {
    MOE_INFO("Hello from callback: {}", test->name);
}

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
