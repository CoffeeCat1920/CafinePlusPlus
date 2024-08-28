#include "../include/Sprite.h"

void Sprite::Init() {

  texture = LoadTextureFromImage( this->image );

}

float Sprite::GetFrameSize() {

  return this->frameSize;

}

void Sprite::AddAnimation( std::string name, int startFrame, int endFrame ) {

  if ( this->frameSize == 0 ) {

    std::cerr << " No Frame Given " << "\n";
    return;

  }

  if ( endFrame >= this->frameCount || startFrame >= this->frameCount || endFrame >= startFrame ) {

    std::cerr << " Invalid Animation make call " << name << "\n";

  }

  this->animations[name] = Animation(startFrame, endFrame);

}

void Sprite::PlayAnimation( float positionX, float positionY, std::string name ) {

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

void Sprite::DrawSprite( float positionX, float positionY ) {

  DrawTexture( texture, positionX, positionY, WHITE );

}
