#include "../include/Entity.h"

void Entity::Init() {

  spriteAnimation.Init();

}

void Entity::SetAnimation( std::string name, int startFrame, int endFrame ) {

  this->spriteAnimation.AddAnimation(name, startFrame, endFrame);

}

void Entity::SetActiveAnimation( std::string name ) {

  this->currentAnimation = name;

}

void Entity::PlayActiveAnimation() {

  this->spriteAnimation.PlayAnimation( currentAnimation.c_str() );

}

void Entity::Move( float directionX, float directionY ) {

  float positionX = GameObject::GetPositon().x + directionX;
  float positionY = GameObject::GetPositon().y + directionY;

  GameObject::SetPositon( positionX , positionY );

}

