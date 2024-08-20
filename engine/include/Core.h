#pragma once

#include "../include/raylib.h"
#include "../include/GameObject.h"

#include <string>
#include <vector>

class Engine {

private:

  float screenWidth, screenHeight;
  int cellSize, cellCountX, cellCountY;

  std::vector<GameObject*> gameObjects;

  void Init();

public:

  Engine( float screenWidth, float screenHeight ) {

    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;

    this->cellSize = 64;

    this->cellCountX = screenWidth / cellSize;
    this->cellCountY = screenHeight / cellSize;

  }
   
  void AddObject( GameObject *gameObject );
  void Run();

};
