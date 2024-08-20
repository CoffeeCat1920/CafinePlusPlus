#pragma once

#include "./GameObject.h"
#include <string>

class BetterCamera {

private:

  Camera2D camera;

  std::string name;

  // Camera Variable 
  Vector2 position;
  Vector2 offset;
  float rotation;
  float zoom;

public:
  
  BetterCamera( std::string name, float positionX, float positionY, float offsetX, float offsetY, float rotation, float zoom ) {

    this->name = name;  
    this->position = Vector2 { positionX, positionY }; 
    this->offset = Vector2 { offsetX, offsetY };
    this->rotation = rotation;
    this->zoom = zoom;

  }
  
  Vector2 GetPosition();
  Camera2D* GetCamera();

protected:
  
  void SetPosition( Vector2 position );

};
