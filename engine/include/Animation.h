#pragma once

#include "../include/raylib.h"
#include "GameObject.h"

#include <string>
#include <unordered_map>

#include <iostream>

struct Animation {
  Animation() {}
  Animation( int startFrame, int endFrame ) : startFrame(startFrame), endFrame(endFrame) {}
  int startFrame;
  int endFrame;
};

class SpriteAnimation {

private:
  
  Image image;
  Texture2D texture;

  int frameCount;
  int frameSize;

  Vector2 position;

  std::unordered_map< std::string, Animation > animations;

public:

  SpriteAnimation( float positionX, float positionY, std::string filepath, int frameCount ) {
    
    this->image = LoadImage( filepath.c_str() );

    this->frameCount = frameCount; 
    this->frameSize = image.width / frameCount;

    this->position = Vector2{positionX, positionY};

  } 

  ~SpriteAnimation() {
    UnloadImage(image);
    UnloadTexture(texture);
  } 

  void Init();

  void AddAnimation( std::string name, int startFrame, int endFrame );
  void PlayAnimation( std::string name );

};
