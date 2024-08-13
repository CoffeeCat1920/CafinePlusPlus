#pragma once

#include "raylib.h"

#include <string>
#include <unordered_map>
#include <vector>

class ColliderMap {

private: 

  std::unordered_map< std::string , std::vector< Rectangle* > > colliders; 

  bool isItemPresent( std::string name );

public:



}; 
