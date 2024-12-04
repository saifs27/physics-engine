#include "particle.hpp"

namespace physics {


void Particle::update() {
    for (int i = 0; i < 4; i++) {
        pos.x += pos.x * velocity.x * deltaTime;
        pos.y += pos.y * velocity.y * deltaTime;
        DrawCircle(pos.x, pos.y, radius, BLACK);
    }
}

}  // namespace physics
