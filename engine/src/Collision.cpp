#include "../include/Collision.h"
#include <iostream>

CollisionSystem* CollisionSystem::instance = nullptr;

void CollisionSystem::AddCollider( Rectangle* rec, std::string name ) {

  this->colliders[name] = rec;

}

bool CollisionSystem::CheckCollision( std::string colliderName_1, std::string colliderName_2 ) {

  const auto& it1 = this->colliders.find(colliderName_1);
  const auto& it2 = this->colliders.find(colliderName_2);

  if (it1 == this->colliders.end() || it2 == this->colliders.end()) {
     std::cerr << "No Collider Found" << std::endl;
     return false;
  }
  
  return CheckCollisionRecs( *this->colliders[ colliderName_1 ] , *this->colliders[ colliderName_2 ] );

}
