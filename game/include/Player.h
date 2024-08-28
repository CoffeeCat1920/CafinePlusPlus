#pragma once

#include "../../engine/include/CaffinePlusPlus.h"
#include "./Settings.h"

class Player : public Entity {

private:

  int speed;

public:

  Player( float positionX, float positionY ) :
  Entity( "player", positionX, positionY, "./resource/square.png" ) 
  {

    speed = 5;

  }

  void Init() override;
  void Update() override;
  void Draw() override;

};
