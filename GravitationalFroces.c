#include <math.h>
#include <stdio.h>
#include <raylib.h>

#define WIDTH 900
#define HEIGHT 600
#define FPS 60
#define OBJ 200
#define BODY 2
#define MASS1 100
#define MASS2 400


int main() {
  InitWindow(WIDTH,HEIGHT,"Gravitaional Forces Simulation");

  SetTargetFPS(FPS);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}

