#pragma once

#include "./GameObject.h"
#include <vector>

class Spawner : GameObject {

private:

  GameObject *objectToSpawn;

  std::vector<GameObject*> objects;

public:

  Spawner( float positionX, float positionY ) : GameObject( "Spawner", positionX, positionY ) {
    objectToSpawn = nullptr;
  }

  void SetObject( GameObject* gameObject );
  void Spawn();

};
