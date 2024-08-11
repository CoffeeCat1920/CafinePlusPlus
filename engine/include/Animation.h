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

  std::unordered_map< std::string, Animation > animations;

  std::string activeAnimation;

  Rectangle source;
  int currentFrame;

public:

  SpriteAnimation( std::string filepath, int frameCount ) {
    
    this->image = LoadImage( filepath.c_str() );

    this->frameCount = frameCount; 
    this->frameSize = image.width / frameCount;
    
    this->source = Rectangle { 0, 0, (float) frameSize, (float) frameSize };
    this->currentFrame = 0;

  } 

  ~SpriteAnimation() {
    UnloadImage(image);
    UnloadTexture(texture);
  } 

  void Init();

  void AddAnimation( std::string name, int startFrame, int endFrame );
  void SetActiveAnimation( std::string name );
  void UpdateAnimaiton();
  void Display( float positionX, float positionY ); 

};
