#include "../include/Camera.h"

Cams* Cams::instance = nullptr;

Camera2D* Cams::GetCamera() {

  return &camera;

}

void Cams::SetCameraPosition( Vector2 position ) {

  this->position = position;

}

void Cams::Update() {

  this->camera.target = position;

}
