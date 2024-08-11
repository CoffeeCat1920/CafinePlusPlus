#include "../include/Collision.h"

CollisionSystem* CollisionSystem::instance = nullptr;

void CollisionSystem::AddCollider( Rectangle* rec, std::string name ) {

  colliders.push_back( Collider( rec, name ) );
  
}
