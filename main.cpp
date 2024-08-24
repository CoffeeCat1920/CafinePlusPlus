#include "./engine/include/CaffinePlusPlus.h"
#include "./game/include/Settings.h"
#include "engine/include/BetterCamera.h"

int main () {

  BetterCamera* camera = new BetterCamera( "default camera", 0, 0, 0, 0, 0, 1.0);

  Engine engine = Engine( BLOCK * BOARD_X, BLOCK * BOARD_Y, camera );
   
  engine.Run();

  return 0;
  
}
