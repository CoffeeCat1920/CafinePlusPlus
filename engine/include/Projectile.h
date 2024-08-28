#pragma once

#include "./Entity.h"
#include "raylib.h"
#include <string>

class Bullet : public Entity {

private:
  
  Vector2 direction;

  int speed;
  int damege;

public:
  
  Bullet( std::string name, int speed, int damage, std::string imagePath ) : 
    Entity( name, 0, 0, imagePath, 1) 
  {

    this->speed = speed;
    this->damege = damage;

  }

  void Init() override;
  void Update() override;
  void Draw() override;

  void GetBullet( Vector2 direction );

};
