#include "particle.hpp"

Particle::Particle(int x, int y, float radius) 
    : radius(radius) {
    pos.x = x;
    pos.y = y;
}

void Particle::update() {
    for (int i = 0; i < 4; i++) {
        pos.x += pos.x * velocity.x * deltaTime;
        pos.y += pos.y * velocity.y * deltaTime;
        //ClearBackground(RAYWHITE);
        DrawCircle(pos.x, pos.y, radius, BLACK);
    }
}