#include <iostream>

#include "engine/log.h"
#include "player.h"
#include "engine/engine.h"
#include "libs/mondengine/libs/util/stb_image.h"
#include "engine/texture.h"
#include "engine/shapes/rectangle.h"
#include "engine/event/key_event.h"
#include "test_object.h"

mondengine::Texture2D loadTextureFromFile(const char *file, bool alpha)
{
    // create texture object
    mondengine::Texture2D texture;
    if (alpha)
    {
        texture.Internal_Format = GL_RGBA;
        texture.Image_Format = GL_RGBA;
    }
    // load image
    int width, height, nrChannels;
    unsigned char* data = stbi_load(file, &width, &height, &nrChannels, 0);
    // now generate texture
    texture.Generate(width, height, data);
    // and finally free image data
    stbi_image_free(data);
    return texture;
}

void start_engine()
{
    mondengine::Log::init(); // Init logger
    APP_INFO("Hello from spdlog"); // Debug message
    auto* engine = new mondengine::Engine(); // Init engine

    // Create gameobjects
    Texture2D playerTex = loadTextureFromFile("resources/Player.png", false);
    auto* player = new Player(playerTex);
    auto* testObject = new TestObject();

    // Player key input callback
    auto fn = [player](const Event& event) { return player->OnKeyInput((KeyEvent&)event); };
    engine->AddEventConsumer(EventTyped(mondengine::EventCategoryKeyboard), fn);
    // Add player tick and render callbacks
    engine->AddTickObject(player);
    engine->AddRenderObject(player);

//    engine->AddRenderObject(testObject);

    engine->Start(); // Start engine and game loop

//    delete player;
    delete engine;
}



int main()
{
    start_engine();
    return 0;
}
