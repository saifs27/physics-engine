#pragma once
 
#include "raylib.h"

class Particle {
public:
    Vector2 pos;
    float radius;
    Vector2 velocity = {0, -4};
    float deltaTime = 0.05;

    Particle(int x, int y, float radius);
    void update();

};
