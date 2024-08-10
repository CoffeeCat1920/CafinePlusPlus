#pragma once

#include "./GameObject.h"
#include "./Animation.h"
#include <string>

class Entity : public GameObject {

private:

  SpriteAnimation spriteAnimation;
  std::string currentAnimation;

public:

  Entity( float positionX, float positionY, std::string filePath, int frameCount) : 
    GameObject( positionX, positionY), 
    spriteAnimation( positionX, positionY, filePath, frameCount)
    {}

  void Init();

  void SetAnimation( std::string name, int startFrame, int endFrame );
  void SetActiveAnimation( std::string name );
  void PlayActiveAnimation();

  void Move( float directionX, float directionY );

  virtual void Update()  = 0;
  virtual void Draw() = 0;

};
