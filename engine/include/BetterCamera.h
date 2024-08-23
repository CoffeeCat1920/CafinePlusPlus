#pragma once

#include "./GameObject.h"
#include <string>

class BetterCamera {

private:

  Camera2D camera;

  std::string name;

public:
  
  BetterCamera( std::string name, float positionX, float positionY, float offsetX, float offsetY, float rotation, float zoom ) {

    this->name = name;

    this->camera.target = Vector2 { positionX , positionY };
    this->camera.offset = Vector2 { offsetX, offsetY };
    this->camera.zoom = zoom;
    this->camera.rotation = rotation;

  }

  Vector2 GetPosition();
  Camera2D* GetCamera();

protected:
  
  void SetPosition( Vector2 position );

};
