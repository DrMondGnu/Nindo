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
#include "engine/event/key_event.h"
#include "engine/log.h"
#include "engine/sprite.h"


using namespace mondengine;
using namespace graphics;
class Player : public Sprite, public ITickObject{
public:
    bool OnKeyInput(const KeyEvent& event);
    explicit Player(Texture2D& texture);

    void Tick() override;

private:
    glm::vec2 m_velocity;
};


#endif //NINDO_PLAYER_H
