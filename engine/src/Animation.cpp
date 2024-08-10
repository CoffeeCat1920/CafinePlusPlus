#include "../include/Animation.h"

void SpriteAnimation::Init() {

  //texture = LoadTextureFromImage( this->image );
  texture = LoadTextureFromImage( this->image );

}

void SpriteAnimation::AddAnimation( std::string name, int startFrame, int endFrame ) {

  this->animations[name] = Animation(startFrame, endFrame);

}

void SpriteAnimation::PlayAnimation( std::string name ) {

  Animation animation = animations[name];


  for ( int i = animation.startFrame; i <= animation.endFrame; i++ ) {

    DrawTexturePro(texture, Rectangle{ (float) i * frameSize, (float) i * frameSize, (float) frameSize, (float) frameSize }, Rectangle {position.x, position.y, (float) frameSize, (float) frameSize}, Vector2 {0, 0}, 0.0f, WHITE );

  }

}
