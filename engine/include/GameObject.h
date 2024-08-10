#pragma once

#include "../include/raylib.h"

class GameObject {

private:

  Vector2 position;

public:

  GameObject( float positionX, float positionY ) {

    this->position = Vector2 { positionX, positionY };

  }

  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  virtual ~GameObject() {}

protected:

  Vector2 GetPositon();
  void SetPositon( float positionX, float positionY );

};
