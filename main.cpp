#include "./engine/include/CaffinePlusPlus.h"
#include "./game/include/Game.h"

int main () {

  Player player = Player( BLOCK * 2, BLOCK * 2 ); 

  Engine engine = Engine( BLOCK * BOARD_X, BLOCK * BOARD_Y, player.GetCamera() );

  engine.AddObject(&player);
   
  engine.Run();

  return 0;
  
}
