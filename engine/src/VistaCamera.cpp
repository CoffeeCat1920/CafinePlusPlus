#include "../include/VistaCamera.h"

#include <iostream>

VistaCamera::VistaCamera( std::string name, float positionX, float positionY, float width, float height, float screenW, float screenH ) 
  : BetterCamera(name, positionX, positionY, (float) screenW / 2, (float) screenH / 2, 0.0f, 1.0f) 
{

  this->boundry = Rectangle { positionX + width / 2, positionY - height/2, width, height };
  this->point = Vector2 { positionX, positionY };

}

void VistaCamera::Update( Vector2 point ) {

  this->point = point;
  DrawRectangleRec( boundry, RED );
  DrawCircle( boundry.x, boundry.y, 10.0f, BLACK );

}
