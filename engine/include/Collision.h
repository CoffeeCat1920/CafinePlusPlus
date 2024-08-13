#pragma once

#include "./raylib.h"

#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

class CollisionSystem {

private:
  
  std::unordered_map< std::string, Rectangle* > colliders; 
  
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
  bool CheckCollision( std::string colliderName_1, std::string colliderName_2 ); 

};
