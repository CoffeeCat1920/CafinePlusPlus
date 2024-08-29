#include "../include/MyCamera.h"

Vector2 MyCamera::GetPosition() { return this->position; }
bool MyCamera::GetLocked() { return this->locked; }
float MyCamera::GetSpeed() { return this->speed; }

void MyCamera::SetPosition( Vector2 position ) { 
  if ( !locked ) this->position = position;
  else return;
}
void MyCamera::SetLocked( bool locked ) { this->locked = locked; } 
void MyCamera::SetSpeed( float speed ) { this->speed = speed; }
void MyCamera::SetOffset( float positionX, float positionY ) {
  this->camera.offset = Vector2 { positionX, positionY }; 
}

Camera2D* MyCamera::GetCamera() {
  
  this->camera.target = position;
  return &camera;

}
