//
// Created by MondGnu on 2/29/2024.
//

#include "player.h"



Player::Player(Texture2D& texture) : Sprite(texture)
{
    position = glm::vec2(200.0f, 200.0f);
    size = glm::vec2(20.0f, 20.0f);
    color = glm::vec3(0.0f, 0.0f, 1.0f);
    m_velocity = glm::vec2(0.0f);
}

bool Player::OnKeyInput(const KeyEvent &event)
{
    float mod = 5;
    if(event.GetAction() == GLFW_RELEASE) {
        mod = 0;
    }
    switch (event.GetKeyCode()) {
        case GLFW_KEY_W:
            m_velocity.y = -mod;
            break;
        case GLFW_KEY_S:
            m_velocity.y = mod;
            break;
        case GLFW_KEY_A:
            m_velocity.x = -mod;
            break;
        case GLFW_KEY_D:
            m_velocity.x = mod;
            break;
    }
    return true;
}

void Player::Tick()
{
    position += m_velocity;
}


