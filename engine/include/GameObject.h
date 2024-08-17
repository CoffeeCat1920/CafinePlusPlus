#pragma once

#include "../include/raylib.h"
#include <string>

class GameObject {

private:
  
  std::string name;
  Vector2 position;

public:

  GameObject( std::string name, float positionX, float positionY ) : name(name) {

    this->position = Vector2 { positionX, positionY };

  }

  Vector2 GetPositon();
  std::string GetName();

  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  virtual ~GameObject() {}

protected:

  void SetPositon( float positionX, float positionY );

};
