//
// Created by MondGnu on 3/7/2024.
//

#include "test_object.h"

//void TestObject::Tick()
//{
//    position += 10;
//}

TestObject::TestObject()
{
    size = glm::vec2(50.0f, 50.0f);
    position = glm::vec2(200.0f, 200.0f);
    color = glm::vec3(1.0f, 0.0f, 0.0f);
}

void TestObject::Render(Renderer &renderer, float lag)
{
    Rectangle::Render(renderer, lag);
}
