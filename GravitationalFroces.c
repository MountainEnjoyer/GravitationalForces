#include <math.h>
#include <stdio.h>
#include <raylib.h>

#define WIDTH 1200
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
float G = 6.67*powf(10,-11);

float d1, d2;

void InitStructs() {
  for (int i=0; i<OBJ; i++) {
    obj[i].radius = R_OBJ;
    obj[i].x = R_OBJ;
    obj[i].y = i==0? 60 : (((HEIGHT + R_OBJ)/OBJ) * i) ;
    obj[i].vx = 10;
    obj[i].vy = 10;
    obj[i].fx = 0;
    obj[i].fy = 0;
  }
  for (int j=0; j<BODY; j++) {
    bodies[j].radius = j<1?MASS1/2:MASS2/2;
    bodies[j].x = j<1?MASS1+MASS1/2:MASS2+MASS2;
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

void UpdateForces(float dt) {
  for (int i=0; i<OBJ; i++){
    float dx1= powf((bodies[0].x - obj[i].x),2);
    float dx2 = powf((bodies[1].x - obj[i].x),2);
    float dy1 = powf((bodies[0].y - obj[i].y),2);
    float dy2 = powf((bodies[1].y - obj[i].y),2);

    d1 = sqrt(dx1 + dy1);
    d2 = sqrt(dx2 + dy2);

    if (d1<=bodies[0].radius){
    
    }else if (d2<=bodies[1].radius) {
    
    } else {
      obj[i].vx += obj[i].fx * dt;
      obj[i].vy += obj[i].fy * dt;
      obj[i].x += obj[i].vx *dt;
      obj[i].y += obj[i].vy * dt;
    }
  }
}

void ResetForces() {
  for (int i=0; i<OBJ; i++) {
    obj[i].fx = 0;
    obj[i].fy = 0;
  }
}

void ComputeForces() {
  for (int i=0; i<OBJ;i++) {
    float dx1= powf((obj[i].x - bodies[0].x),2);
    float dx2 = powf((obj[i].x - bodies[1].x),2);
    float dy1 = powf((obj[i].y - bodies[0].y),2);
    float dy2 = powf((obj[i].y - bodies[1].y),2);

    d1 = sqrt(dx1 + dy1);
    d2 = sqrt(dx2 + dy2);

    d1<1?d1=1:d1;
    d2<1?d2=1:d2;

    float nx1= dx1/d1;
    float ny1= dy1/d1;
    float nx2= dx2/d2;
    float ny2= dy2/d2;

    float f1 = G * (R_OBJ*MASS1/d1);
    float f2 = G * (R_OBJ*MASS2/d2);

    float fx1 = f1 * nx1;
    float fy1 = f1 * ny1;
    float fx2 = f2 * nx2;
    float fy2 = f2 * ny2;

    obj[i].fx -= fx1 + fx2;
    obj[i].fy -= fy1 + fy2;
  } 
}

int main() {
  InitWindow(WIDTH,HEIGHT,"Gravitaional Forces Simulation");

  SetTargetFPS(FPS);
  InitStructs();
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    ResetForces();
    ComputeForces();
    UpdateForces(GetFrameTime());
    DrawStructs();
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}

