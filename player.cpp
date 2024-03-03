//
// Created by MondGnu on 2/29/2024.
//

#include "player.h"


void Player::Tick()
{
}

Player::Player(Texture2D texture) : m_Texture(std::move(texture)), m_Pos(glm::vec2(0.0f)), m_Size(glm::vec2(1.0f))
{
    m_Pos = glm::vec2(200.0f, 200.0f);
    m_Size = glm::vec2(300.0f, 400.0f);
}

void Player::Render(float lag)
{
//    renderer.DrawSprite(m_Texture, m_Pos, m_Size);
}
