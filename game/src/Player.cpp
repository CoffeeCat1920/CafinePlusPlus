#include "../include/Player.h"
#include <string>

void Player::Init() {
  
  Entity::Init();

}

void Player::Update() {

  Vector2 direction;

  if ( IsKeyDown( KEY_D ) || IsKeyDown( KEY_LEFT ) ) direction.x = 1;
  else if ( IsKeyDown( KEY_A ) || IsKeyDown( KEY_RIGHT ) ) direction.x = -1;
  else direction.x = 0;

  if ( IsKeyDown( KEY_W ) || IsKeyDown( KEY_UP ) ) direction.y = -1;
  else if ( IsKeyDown( KEY_S ) || IsKeyDown( KEY_S ) ) direction.y = 1;
  else direction.y = 0;

  Entity::Move( direction.x * speed , direction.y * speed );

}

void Player::Draw() {

  this->DrawSprite();

  std::string pos = "PLayer Position X : " + std::to_string( GetPositon().x ) + " Y : " + std::to_string( GetPositon().y ) + "\n";
  DrawText( pos.c_str() , 0, BLOCK * 1, 32, BLACK );

}
