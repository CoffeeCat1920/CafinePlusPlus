#include "../include/BetterCamera.h"

Camera2D* BetterCamera::GetCamera() {

  this->camera.target = this->position;

  return &this->camera;

}

Vector2 BetterCamera::GetPosition() {

  return this->position;

} 

void BetterCamera::SetPosition( Vector2 position ) {

  this->position = position;

}
