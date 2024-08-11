#include "../include/Animation.h"

void SpriteAnimation::Init() {

  texture = LoadTextureFromImage( this->image );

}

void SpriteAnimation::AddAnimation( std::string name, int startFrame, int endFrame ) {

  this->animations[name] = Animation(startFrame, endFrame);

}

void SpriteAnimation::SetActiveAnimation( std::string name ) {

  this->activeAnimation = name; 

}

void SpriteAnimation::UpdateAnimaiton() {

  Animation animation = animations[ activeAnimation ];
  
  if ( currentFrame ) 

}
