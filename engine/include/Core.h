#pragma once

#include "../include/raylib.h"
#include "../include/GameObject.h"
#include "../include/Camera.h"

#include <string>
#include <vector>

class Engine {

private:

  Cams *cams;
  Camera2D *camera;

  float screenWidth, screenHeight;
  int cellSize, cellCountX, cellCountY;

  std::vector<GameObject*> gameObjects;

  void Init();

public:

  Engine( float screenWidth, float screenHeight ) {

    this->cams = Cams::GetInstance();
    this->camera = cams->GetCamera();

    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;

    this->cellSize = 64;

    this->cellCountX = screenWidth / cellSize;
    this->cellCountY = screenHeight / cellSize;

  }
   
  void AddObject( GameObject *gameObject );
  void Run();

};
