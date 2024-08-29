#include "../include/Core.h"
#include <vector>
#include <string>

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

    BeginDrawing();

    DrawCircle( this->camera->GetCamera()->target.x , this->camera->GetPosition().y, 64, BLUE );

    BeginMode2D( *this->camera->GetCamera() );

    for ( auto& o : gameObjects ) {

      if ( o != nullptr )  o->Update();

      x++;

    }

    ClearBackground( GRAY );

    for ( auto& o : gameObjects ) {

      if ( o != nullptr ) o->Draw();

    }

    EndMode2D();

    // Debug stuff
    //
    std::string fps = "FPS: " + std::to_string( GetFPS() );
    DrawText( fps.c_str()  , 0, 64 * 0, 32, BLACK);

    EndDrawing();


  }

}

