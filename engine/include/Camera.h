#pragma once

#include "./raylib.h"

class EngineCamera {

private: 

  Camera camera = { 0, 0 };
  float *positionX, *positionY;

public:

  EngineCamera( float *positionX, float *positionY ) {

    this->positionX = positionX;
    this->positionY = positionY;

  }

  Camera2D GetCamera();

};
