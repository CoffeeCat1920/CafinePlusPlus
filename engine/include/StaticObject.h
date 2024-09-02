#pragma once

#include "./raylib.h"
#include "./GameObject.h"
#include "./Sprite.h"
#include <string>

class StaticObject : public GameObject {

private:

  Rectangle rec;
  Sprite sprite;

  std::string currentAnimation;

public:

  StaticObject( float positionX, float positionY, float width, float height, std::string filePath, int frameCount ) : 
    GameObject( "wall", positionX, positionY ),
    sprite( filePath, frameCount )
  {

    rec = Rectangle { positionX, positionY, width, height };

  }  

  StaticObject( float positionX, float positionY, float width, float height, std::string filePath ) : 
    GameObject( "wall", positionX, positionY ),
    sprite( filePath )
  {

    rec = Rectangle { positionX, positionY, width, height };

  }

  virtual void Init();

  
  // Animations
  void SetAnimation( std::string name, int startFrame, int endFrame );
  void SetActiveAnimation( std::string name );
  void PlayActiveAnimation();

  // Static Sprite Drawing
  void DrawSprite();
  
  // Virtual Stuff
  virtual void Update() = 0;
  virtual void Draw() = 0;

};
