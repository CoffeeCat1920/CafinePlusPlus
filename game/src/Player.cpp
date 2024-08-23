#include "../include/Player.h"

void Player::Init() {

  Entity::Init();
  this->SetAnimation( "idle" , 0, 3);
  this->SetActiveAnimation("idle");

}

void Player::Update() {

  if (IsKeyDown(KEY_W)) this->Move( 0 , -1 * speed );
  if (IsKeyDown(KEY_A)) this->Move( -1 * speed , 0 );
  if (IsKeyDown(KEY_S)) this->Move( 0 , 1 * speed );
  if (IsKeyDown(KEY_D)) this->Move( 1 * speed , 0 );
  
  std::cout << " Player Position X : " << GameObject::GetPositon().x << " Y : " << GameObject::GetPositon().y << std::endl;

  DrawCircle( GameObject::GetPositon().x , GameObject::GetPositon().y, 5, BLUE);

  camera.Update( GameObject::GetPositon() );

}

void Player::Draw() {

  this->PlayActiveAnimation();

  std::string p = "PlayerPostion X: " + std::to_string( GameObject::GetPositon().x ) + " Y : " + std::to_string( GameObject::GetPositon().y );

  DrawText( p.c_str(), BLOCK * 0, BLOCK, 32, BLACK);

}

BetterCamera* Player::GetCamera() {

  return &this->camera;

}
