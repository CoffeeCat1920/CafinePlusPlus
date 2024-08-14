#include "../include/Camera.h"

CameraSystem* CameraSystem::GetInstance() {

  if ( this->instance == nullptr ) {

    instance = new CameraSystem();

  }

  return instance;

}

Camera2D CameraSystem::GetCamera() {
  return camera;
}

void CameraSystem::AttachCamera( GameObject* gameObject ) {

  this->attached = gameObject;

}

void CameraSystem::Update() {

  this->camera.target = attached->GetPositon();

}
