#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

// Variables file to modify via bash script
#include "Variables.h"

typedef struct  {
  float x,y,radius,vx,vy,fx,fy;
  float mass;
}Bodies;

typedef struct  {
  float x,y,radius,vx,vy,fx,fy;
  float mass;
}Objects;

typedef struct {
  Vector2 pos[L_TRAIL];
}Trail; 

Objects obj[OBJ];
Bodies bodies[BODY];
Trail trail[OBJ];

void InitStructs() {
  for (int i=0; i<OBJ; i++) {
    obj[i].radius = R_OBJ;
    obj[i].x = R_OBJ;
    obj[i].y = (((HEIGHT)/OBJ) * i) +R_OBJ ;
    obj[i].vx = XSPEED_OBJ;
    obj[i].vy = YSPEED_OBJ;
    obj[i].fx = 0;
    obj[i].fy = 0;
    obj[i].mass = MASS_OBJ;
    for (int h = L_TRAIL; h>=0; h--)
      trail[i].pos[h] = (Vector2) {obj[i].x, obj[i].y};
  }
  for (int j=0; j<BODY; j++) {
    bodies[j].radius = j<1?50:200;
    bodies[j].x = j<1?150:WIDTH/2;
    bodies[j].y = j<1?HEIGHT/3:HEIGHT/2 ;
    bodies[j].vx = 0;
    bodies[j].vy = 0;
    bodies[j].fx = 0;
    bodies[j].fy = 0;
  }
}

void DrawStructs() {
  for (int j=0; j<BODY;j++) {
    DrawCircle(bodies[j].x, bodies[j].y, bodies[j].radius, DARKGRAY);
  }
  for (int i=0; i<OBJ; i++) {
    for (int h=L_TRAIL-1; h>=0; h--) {
      DrawCircle(trail[i].pos[h].x, trail[i].pos[h].y, 1,LIGHTGRAY);
    }
    DrawCircle(obj[i].x, obj[i].y, obj[i].radius, WHITE);
  }
}

void UpdateForces(float dt) {
  for (int i=0; i<OBJ; i++){
    float dx1= powf((bodies[0].x - obj[i].x),2);
    float dx2 = powf((bodies[1].x - obj[i].x),2);
    float dy1 = powf((bodies[0].y - obj[i].y),2);
    float dy2 = powf((bodies[1].y - obj[i].y),2);

    float d1 = sqrt(dx1 + dy1);
    float d2 = sqrt(dx2 + dy2);

    if (d1+0.5<=bodies[0].radius) {

    } else if (d2+0.5<=bodies[1].radius){

    } else {
      obj[i].vx += obj[i].fx * dt;
      obj[i].vy += obj[i].fy * dt;
      obj[i].x += obj[i].vx *dt;
      obj[i].y += obj[i].vy * dt;  
    }
    for (int j=L_TRAIL; j>=0; j--) {
      trail[i].pos[j+1] = trail[i].pos[j];
    }
    trail[i].pos[0] = (Vector2) {obj[i].x, obj[i].y};
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
    float dx1 = powf((bodies[0].x - obj[i].x),2);
    float dx2 = powf((bodies[1].x - obj[i].x ),2);
    float dy1 = powf((bodies[0].y - obj[i].y),2);
    float dy2 = powf((bodies[1].y - obj[i].y),2);

    float d1 = sqrt(dx1 + dy1);
    float d2 = sqrt(dx2 + dy2);

    //d1<1?d1=1:d1;
    //d2<1?d2=1:d2;

    float nx1= dx1/d1;
    float ny1= dy1/d1;
    float nx2= dx2/d2;
    float ny2= dy2/d2;

    float f1 = G * (MASS_OBJ*MASS1/powf(d1,2));
    float f2 = G * (MASS_OBJ*MASS2/powf(d2,2));
    
    float fx1 = f1 * nx1;
    float fy1 = f1 * ny1;
    float fx2 = f2 * nx2;
    float fy2 = f2 * ny2;
    
    if(obj[i].y > bodies[0].y) {
      obj[i].fy -= fy1;
    } else {
      obj[i].fy += fy1;

    }
      if(obj[i].x > bodies[0].x) {
      obj[i].fx -= fx1;
    } else {
      obj[i].fx += fx1;

    }
    if(obj[i].y > bodies[1].y) {
      obj[i].fy -= fy2;
    } else {
      obj[i].fy += fy2;

    }
      if(obj[i].x > bodies[1].x) {
      obj[i].fx -= fx2;
    } else {
      obj[i].fx += fx2;

    }
  } 
}

int main() {
  SetConfigFlags(FLAG_FULLSCREEN_MODE);
  InitWindow(WIDTH,HEIGHT,"Gravitaional Forces Simulation");

  SetTargetFPS(FPS);
  InitStructs();
  while (!WindowShouldClose()) {
    if (IsKeyPressed(KEY_ENTER)) {
      InitStructs();
    }
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
