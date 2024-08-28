#include "../include/Core.h"
#include <vector>
#include <string>

#include <iostream>

void Engine::AddObject( GameObject* gameObject ) {

  gameObjects.push_back(gameObject);

}

void Engine::Init() {

  for ( auto& o : gameObjects ) {

    o->Init();

  }  

}

void Engine::Run() {

  InitWindow( cellSize * cellCountX, cellSize * cellCountY, "Title");

  this->Init();

  int x = 0;

  SetTargetFPS( 60 );

  while (!WindowShouldClose()) {

    BeginMode2D( *this->camera->GetCamera() );

    for ( auto& o : gameObjects ) {

      if ( o != nullptr )  o->Update();

      x++;

    }

    BeginDrawing();

    ClearBackground( GRAY );


    for ( auto& o : gameObjects ) {

      if ( o != nullptr ) o->Draw();

    }

    
    // Debug stuff
    //
    std::string fps = "FPS: " + std::to_string( GetFPS() );
    DrawText( fps.c_str()  , 0, 64 * 0, 32, BLACK);
    //
    
    this->camera->SetPosition( Vector2 { this->camera->GetPosition().x + 1, this->camera->GetPosition().y } );
    std::cout << this->camera->GetPosition().x << std::endl;

    EndDrawing();

    EndMode2D();


  }

}

