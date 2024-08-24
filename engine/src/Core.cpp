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

      o->Update();

      x++;

    }

    BeginDrawing();

    ClearBackground( GRAY );


    for ( auto& o : gameObjects ) {

      o->Draw();

    }

    EndMode2D();

    std::string fps = "FPS: " + std::to_string( GetFPS() );

    DrawText( fps.c_str()  , 0, 0, 32, BLACK);

    EndDrawing();

  }

}

