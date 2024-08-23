#pragma once

#include "./Settings.h" 

#include "../../engine/include/Entity.h"
#include "../../engine/include/VistaCamera.h"

#include <string>

class Player : public Entity {

private:

  int speed;
  VistaCamera camera;

public:

  Player( float positionX, float positionY) : 
    Entity( "player", positionX, positionY, "./game/resource/player.png", 4 ),
    camera( GameObject::GetName(), positionX, positionY, BLOCK * 4, BLOCK * 4, BLOCK * BOARD_X, BLOCK * BOARD_Y )  
  {
    this->speed = 1;
  }

  void Init() override;
  void Update() override;
  void Draw() override;

  BetterCamera* GetCamera();

};
