#include <iostream>

#include "engine/log.h"
#include "player.h"
#include "engine/engine.h"
#include "libs/mondengine/libs/util/stb_image.h"
#include "engine/texture.h"
#include "engine/shapes/rectangle.h"

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
    mondengine::Log::init();
    APP_INFO("Hello from spdlog");
    auto* engine = new mondengine::Engine();


//    Texture2D playerTex = loadTextureFromFile("resources/awesomeface.png", true);
//    auto* player = new Player(playerTex);
//    engine->AddGameObject(player);
    engine->Start();


//    delete player;
    delete engine;
}



int main()
{
    start_engine();
    return 0;
}
