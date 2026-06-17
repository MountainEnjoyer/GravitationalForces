#include <math.h>
#include <stdio.h>
#include <raylib.h>

#define WIDTH 900
#define HEIGHT 600
#define FPS 60
#define OBJ 20
#define R_OBJ 2
#define BODY 2
#define MASS1 100
#define MASS2 400

typedef struct  {
  float x,y,radius,vx,vy,fx,fy;
  float mass;
}Bodies;

typedef struct  {
  float x,y,radius,vx,vy,fx,fy;
  float mass;
}Objects;

Objects obj[OBJ];
Bodies bodies[BODY];

void InitStructs() {
  for (int i=0; i<OBJ; i++) {
    obj[i].radius = R_OBJ;
    obj[i].x = R_OBJ;
    obj[i].y = ((HEIGHT+ R_OBJ*2)/OBJ) * i+1 ;
    obj[i].vx = 5;
    obj[i].vy = 5;
    obj[i].fx = 0;
    obj[i].fy = 0;
  }
  for (int j=0; j<BODY; j++) {
    bodies[j].radius = j<1?MASS1/2:MASS2/2;
    bodies[j].x = j<1?MASS1+MASS1/2:MASS2+MASS2/2;
    bodies[j].y = HEIGHT/2 ;
    bodies[j].vx = 5;
    bodies[j].vy = 5;
    bodies[j].fx = 0;
    bodies[j].fy = 0;
  }
}

void DrawStructs() {
  for (int j=0; j<BODY;j++) {
    DrawCircle(bodies[j].x, bodies[j].y, bodies[j].radius, DARKGRAY);
  }
  for (int i=0; i<OBJ; i++) {
    DrawCircle(obj[i].x, obj[i].y, obj[i].radius, WHITE);
  }
}

void UpdateStructs() {
  
}

int main() {
  InitWindow(WIDTH,HEIGHT,"Gravitaional Forces Simulation");

  SetTargetFPS(FPS);
  InitStructs();
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    UpdateStructs();
    DrawStructs();
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}

