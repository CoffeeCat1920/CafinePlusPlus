#pragma once 

#include "./BetterCamera.h"
#include "./raylib.h"

class VistaCamera : public BetterCamera {

private:

  Rectangle boundry;
  Vector2 point;

public:

  VistaCamera( std::string name, float positionX, float positionY, float width, float height, float screenW, float screenH ); 

  void Update( Vector2 point );


};
