//
// Created by MondGnu on 2/29/2024.
//

#ifndef NINDO_PLAYER_H
#define NINDO_PLAYER_H

#include "engine/game_object.h"
#include "engine/graphics/shapes.h"
#include "engine/engine.h"
#include "engine/texture.h"
#include "engine/graphics/vao.h"
#include "engine/graphics/vbo.h"


using namespace mondengine;
using namespace graphics;
class Player : public mondengine::IGameObject{
public:
    explicit Player(Texture2D texture);
    void Render(float lag) override;
    void Tick() override;
private:
    glm::vec2 m_Pos;
    glm::vec2 m_Size;
    float rotation = 0.0f;
    Texture2D m_Texture;

};


#endif //NINDO_PLAYER_H
