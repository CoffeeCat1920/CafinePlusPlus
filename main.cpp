#include "./engine/include/CaffinePlusPlus.h"
#include "./game/include/Game.h"
#include "game/include/Wall.h"

int main () {

  Player player = Player( BLOCK * 2, BLOCK * 2 ); 
  Wall wall = Wall( BLOCK * 1, BLOCK * 1 );

  Engine engine = Engine( BLOCK * BOARD_X, BLOCK * BOARD_Y, player.GetCamera() );

  engine.AddObject(&wall);
  engine.AddObject(&player);
   
  engine.Run();

  return 0;
  
}
