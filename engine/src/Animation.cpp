#include "../include/Animation.h"

void SpriteAnimation::Init() {

  texture = LoadTextureFromImage( this->image );

}

float SpriteAnimation::GetFrameSize() {

  return this->frameSize;

}

void SpriteAnimation::AddAnimation( std::string name, int startFrame, int endFrame ) {

  this->animations[name] = Animation(startFrame, endFrame);

}

void SpriteAnimation::PlayAnimation( float positionX, float positionY, std::string name ) {

  auto it = animations.find( name );

  if ( it == animations.end() ) {
    
    std::cerr << "Animation specified are incorrect for " << name << "\n"; 

  }

  Animation& animation = it->second;

  currentTime += GetFrameTime();  
  if ( currentTime >= frameTime ) {

    currentTime -= frameTime;
    currentFrame++;

    if ( currentFrame > animation.endFrame ) {

      currentFrame = animation.startFrame;

    }
     
  } 

  Rectangle source = Rectangle { (float) currentFrame * frameSize, 0, (float) frameSize, (float) frameSize }; 
  DrawTexturePro( this->texture , source, Rectangle { positionX, positionY, (float) frameSize, (float) frameSize } , Vector2 {0, 0}, 0.0f, WHITE);

}
