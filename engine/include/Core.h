#pragma once

#include "./raylib.h"
#include "./GameObject.h"
#include "./MyCamera.h"

#include <string>
#include <vector>

class Engine {

private:

  MyCamera* camera;

  float screenWidth, screenHeight;
  int cellSize, cellCountX, cellCountY;

  std::vector<GameObject*> gameObjects;

  void Init();

public:

  Engine( float screenWidth, float screenHeight ) 
  {

    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;

    this->cellSize = 64;

    this->cellCountX = screenWidth / cellSize;
    this->cellCountY = screenHeight / cellSize;

  }

  Engine( float screenWidth, float screenHeight, MyCamera* camera ) 
  {

    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;

    this->cellSize = 64;

    this->cellCountX = screenWidth / cellSize;
    this->cellCountY = screenHeight / cellSize;

    this->camera = camera;

  }
   
  void AddObject( GameObject *gameObject );
  void Run();

};
