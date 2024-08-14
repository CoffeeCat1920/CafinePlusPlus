#pragma once

#include "./GameObject.h"
#include "./raylib.h"

class CameraSystem {

private: 

  Camera2D camera = { 0, 0 };
  
  Vector2 position;
  CameraSystem *instance;

  GameObject* attached;

  CameraSystem() {
    
    this->attached = nullptr;
  
    this->camera = { 0 };
    this->camera.target = Vector2 {0, 0};
    this->camera.offset = (Vector2){ 512/2.0f, 256/2.0f };
    this->camera.rotation = 0.0f;
    this->camera.zoom = 1.0f;

  }

public:

  Camera2D GetCamera(); 
  CameraSystem* GetInstance();
  void AttachCamera( GameObject *gameObject );
  void Update();

};
