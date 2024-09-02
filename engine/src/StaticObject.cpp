#include "../include/StaticObject.h"

void StaticObject::Init() {

  sprite.Init();

}

void StaticObject::SetAnimation( std::string name, int startFrame, int endFrame ) {

  this->sprite.AddAnimation(name, startFrame, endFrame);

}

void StaticObject::SetActiveAnimation( std::string name ) {

  this->currentAnimation = name;

}

void StaticObject::PlayActiveAnimation() {

  this->sprite.PlayAnimation( GameObject::GetPositon().x, GameObject::GetPositon().y, currentAnimation );

}

void StaticObject::DrawSprite() {

  this->sprite.DrawSprite( GameObject::GetPositon().x, GameObject::GetPositon().y );

}

