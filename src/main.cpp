#include "physics_engine.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Physics");

    SetTargetFPS(10);
    physics::Vec3 pos(400, 400, 0);
    physics::Vec3 velocity(4, 0, 0);
    physics::Particle p(pos, velocity, 50);
    while (!WindowShouldClose()) {
        
        BeginDrawing();

        ClearBackground(RAYWHITE);
        p.update();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
