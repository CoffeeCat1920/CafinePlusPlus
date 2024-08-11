#pragma once

#include "./raylib.h"

#include <string>
#include <vector>
#include <iostream>

struct Collider {

  Rectangle* rec;
  std::string name;
  
  Collider ( Rectangle* rec, std::string name ) {
    
    this->rec = rec;
    this->name = name;    

  }

};

class CollisionSystem {

private:

  std::vector<Collider> colliders;
  
  // Singleton
  static CollisionSystem* instance;
  CollisionSystem() {

    std::cout << "INFO: Collision System Started \n";

  }

public:

  ~CollisionSystem() {
    std::cout << "Collision System Destroyed\n";
  }

  static CollisionSystem* GetInstance() {
     
    if ( instance == nullptr ) {
      
      instance = new CollisionSystem();      

    }

    return instance;

  } 

  void AddCollider( Rectangle* rec, std::string name );

};
