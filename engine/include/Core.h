#pragma once

#include "./raylib.h"
#include "./GameObject.h"
#include "./BetterCamera.h"

#include <string>
#include <vector>

class Engine {

private:

  BetterCamera* camera;
  Camera2D shit;

  float screenWidth, screenHeight;
  int cellSize, cellCountX, cellCountY;

  std::vector<GameObject*> gameObjects;

  void Init();

public:

  Engine( float screenWidth, float screenHeight, BetterCamera* camera ) :
    camera(camera)
  {

    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;

    this->cellSize = 64;

    this->cellCountX = screenWidth / cellSize;
    this->cellCountY = screenHeight / cellSize;

    shit.target = Vector2 { (float) 64 * 2 + 20, (float) 64 * 2 + 20 };
    shit.offset = Vector2 { (float) 512 / 2, (float) 256 / 2 };
    shit.rotation = 0.0f;
    shit.zoom = 1.0f;

  }
   
  void AddObject( GameObject *gameObject );
  void Run();

};
