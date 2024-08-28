#pragma once

#include "./GameObject.h"
#include "./Sprite.h"
#include "./Collision.h"

#include <string>

class Entity : public GameObject {

private:

  Sprite spriteAnimation;
  std::string currentAnimation;

  Rectangle collisionBody;

public:

  Entity( std::string name, float positionX, float positionY, std::string filePath, int frameCount) :
    GameObject( name, positionX, positionY), 
    spriteAnimation( filePath, frameCount)
  {

    collisionBody = { positionX, positionY, spriteAnimation.GetFrameSize(), spriteAnimation.GetFrameSize() };

  }

  Entity( std::string name, float positionX, float positionY, std::string filePath ) : 
    GameObject( name , positionX, positionY ),
    spriteAnimation( filePath ) 
  {}

  void Init();
  
  // Animations
  void SetAnimation( std::string name, int startFrame, int endFrame );
  void SetActiveAnimation( std::string name );
  void PlayActiveAnimation();

  // Static Sprite Drawing
  void DrawSprite();
  
  // Movement
  void Move( float directionX, float directionY );
  
  // To be made
  virtual void Update()  = 0;
  virtual void Draw() = 0;

};
