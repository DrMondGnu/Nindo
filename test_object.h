//
// Created by MondGnu on 3/7/2024.
//

#ifndef NINDO_TEST_OBJECT_H
#define NINDO_TEST_OBJECT_H

#include "engine/shapes/rectangle.h"
using namespace mondengine;
class TestObject : public Rectangle{
public:
    TestObject();

    void Render(Renderer &renderer, float lag) override;

    void AddPos(glm::vec2 pos) {
        position += pos;
    }
//    void Tick() override;
};


#endif //NINDO_TEST_OBJECT_H
