#include "../include/GameObject.h"

Vector2 GameObject::GetPositon() {

  return this->position;

}

void GameObject::SetPositon( float positionX, float positionY ) {
  
  this->position = Vector2 { positionX, positionY };

}

std::string GameObject::GetName() {
  
  return name;

}
