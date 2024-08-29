#pragma once 

#include "./raylib.h"

class MyCamera {

private: 

  Vector2 position;
  Vector2 offset;
  float speed;
  bool locked;

  Camera2D camera;

public:

  MyCamera() {

    position = Vector2 { 0, 0 };
    speed = 5;
    locked = false;

    this->camera.target = Vector2 { 0, 0 };
    this->camera.offset = Vector2 { 0, 0 };
    this->camera.zoom = 1.0f;
    this->camera.rotation = 0.0f;

    this->offset = Vector2 { 0, 0 };

  }

  MyCamera( Vector2 position, float speed, bool locked ) {

    this->position = position;
    this->speed = speed;
    this->locked = locked;

    this->camera.target = position;
    this->camera.offset = Vector2 { 0, 0 };
    this->camera.zoom = 1.0f; 
    this->camera.rotation = 0.0f;

  }

  Vector2 GetPosition();
  bool GetLocked();
  float GetSpeed();

  bool CheckBounds();

  void SetPosition( Vector2 position );
  void SetLocked( bool locked );
  void SetSpeed( float speed );
  void SetOffset( float positionX, float positionY );

  Camera2D* GetCamera();

};
