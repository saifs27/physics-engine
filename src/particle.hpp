#pragma once

#include "raylib.h"
#include "math.hpp"
namespace physics {

class Particle {
   public:
    Vec3 pos;
    float radius;
    Vec3 velocity = {0, -4, 0};
    float deltaTime = 0.05;

    Particle(Vec3 pos, Vec3 initial_velocity, float radius)
        : pos(pos), velocity(initial_velocity), radius(radius){};
    void update();
};

}  // namespace physics
