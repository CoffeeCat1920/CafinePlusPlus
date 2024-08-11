#include "../include/Player.h"

void Player::Init() {

  Entity::Init();
  this->SetAnimation( "walk" , 0, 2);
  this->SetActiveAnimation("walk");

}

void Player::Update() {

  if (IsKeyDown(KEY_W)) this->Move( 0 , -0.1 );
  if (IsKeyDown(KEY_A)) this->Move( -0.1 , 0 );
  if (IsKeyDown(KEY_S)) this->Move( 0 , 0.1 );
  if (IsKeyDown(KEY_D)) this->Move( 0.1 , 0 );

  this->PlayActiveAnimation();

}

void Player::Draw() {


}
