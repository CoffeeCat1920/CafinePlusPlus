#include "../include/BetterCamera.h"

Camera2D* BetterCamera::GetCamera() {

  return &this->camera;

}

Vector2 BetterCamera::GetPosition() {

  return this->camera.target;

} 

void BetterCamera::SetPosition( Vector2 position ) {

  this->camera.target = position;

}
