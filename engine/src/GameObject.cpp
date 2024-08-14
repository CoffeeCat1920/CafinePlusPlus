#include "../include/GameObject.h"

Vector2 GameObject::GetPositon() {

  return this->position;

}

void GameObject::SetPositon( float positionX, float positionY ) {
  
  this->position = Vector2 { positionX, positionY };

}

Vector2* GameObject::GetPositonRef() {

  return &position;

} 
