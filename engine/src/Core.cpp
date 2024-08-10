#include "../include/Core.h"
#include <vector>

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

  while (!WindowShouldClose()) {

    for ( auto& o : gameObjects ) {

      o->Update();

      x++;

    }

    BeginDrawing();

    ClearBackground(WHITE);

    for ( auto& o : gameObjects ) {

      o->Draw();

    }


    EndDrawing();

  }

}
