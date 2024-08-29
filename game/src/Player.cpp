#include "../include/Player.h"

void Player::Init() {
  
  Entity::Init();
  
  camera.SetOffset( SCREENWIDTH / 2 , SCREENHEIGHT / 2);

}

void Player::Update() {

  Vector2 direction;

  if ( IsKeyDown( KEY_D ) || IsKeyDown( KEY_LEFT ) ) { 
    direction.x = 1; 
    camera.SetPosition( Vector2 { camera.GetPosition().x + 1, camera.GetPosition().y } );
  }
  else if ( IsKeyDown( KEY_A ) || IsKeyDown( KEY_RIGHT ) ) { 
    direction.x = -1; 
    camera.SetPosition( Vector2 { camera.GetPosition().x - 1, camera.GetPosition().y } );
  }
  else {
    direction.x = 0; 
  }

  if ( IsKeyDown( KEY_W ) || IsKeyDown( KEY_UP ) ) {
    direction.y = -1;
  }
  else if ( IsKeyDown( KEY_S ) || IsKeyDown( KEY_S ) ) { 
    direction.y = 1;
  }
  else { 
    direction.y = 0;
  }
  
  camera.SetPosition( GameObject::GetPositon() );
  Entity::Move( direction.x * speed , direction.y * speed );

}

void Player::Draw() {

  this->DrawSprite();

}

MyCamera* Player::GetCamera() {
  return &this->camera; 
}
