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

      cams->Update();

      o->Update();

      x++;

    }

    BeginDrawing();

    BeginMode2D( *cams->GetCamera()  );

    ClearBackground( GRAY );

    for ( auto& o : gameObjects ) {

      o->Draw();

    }

    EndMode2D();

    EndDrawing();

  }

}

