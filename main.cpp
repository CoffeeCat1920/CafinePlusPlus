#include "./engine/include/CaffinePlusPlus.h"
#include "./game/include/Game.h"

int main () {

  BetterCamera* camera = new BetterCamera( "default camera", 0, 0, 0, 0, 0, 1.0);

  Player player = Player( BLOCK * 2, BLOCK * 2 ); 

  Engine engine = Engine( BLOCK * BOARD_X, BLOCK * BOARD_Y, camera );

  engine.AddObject(&player);
   
  engine.Run();

  return 0;
  
}
