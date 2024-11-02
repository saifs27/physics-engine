// fluid-sim.cpp : Defines the entry point for the application.
//

#include "physics-sim.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, " n Simulation");

    SetTargetFPS(10);

    Particle p(400, 400, 50);
    while (!WindowShouldClose()) {
        
        BeginDrawing();

        ClearBackground(RAYWHITE);
        p.update();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
