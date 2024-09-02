#pragma once

#include "./raylib.h"
#include "GameObject.h"
#include <vector>

class ObjectTree {

private:

  Rectangle rec;
  int capacity;
  std::vector<GameObject> gameObjects;

  bool isDevided;

  ObjectTree* ne;
  ObjectTree* nw;
  ObjectTree* se;
  ObjectTree* sw;

  bool Contain( GameObject gameObject );

public:

  ObjectTree( float x, float y, float width, float height, int capacity ) : 
    rec { x, y, width, height }, 
    capacity( capacity )
  {
    ne = nullptr;
    nw = nullptr;
    se = nullptr;
    sw = nullptr;

    isDevided = false;
  }

  ~ObjectTree() {
    delete ne; 
    delete nw;
    delete se;
    delete sw;
  } 
  
  void Devide();
  void Insert();

};
