#pragma once

#include "../include/raylib.h"
#include "GameObject.h"
#include <iostream>
#include <string>
#include <unordered_map>
  
class Cams {

private:

  Vector2 position;
  std::unordered_map<std::string, Vector2> positions;

  Camera2D camera;
  static Cams* instance;

  Cams() {
    this->camera.target = Vector2 {0, 0};
    this->camera.offset = Vector2 { (float)512/2, (float)256/2 };
    this->camera.zoom = 1.0f;
    this->camera.rotation = 0.0f;
  }

public:

  static Cams* GetInstance() {
    if (instance == nullptr) {
      instance = new Cams();
    }
    return instance;
  }
  
  void SetCameraPosition( Vector2 position );
  Camera2D* GetCamera();
  void Update();

};
