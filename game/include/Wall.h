#pragma once

#include "../../engine/include/CaffinePlusPlus.h"

class Wall : public StaticObject {

private:

public:

  Wall( float positionX, float positionY ) :
    StaticObject(positionX, positionY, 64, 64, "./resource/square.png") 
  {}
  
  void Init() override;
  void Update() override; 
  void Draw() override;

};
