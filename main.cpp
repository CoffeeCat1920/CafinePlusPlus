#include "./engine/include/Core.h"

#include "./game/include/Player.h"
#include "./game/include/Settings.h"

int main () {

  Player player = Player{ BLOCK * 2, BLOCK * 2 };

  Engine engine = Engine( BLOCK * BOARD_X, BLOCK * BOARD_Y, player.GetCamera() );
  
  engine.AddObject(&player);
   
  engine.Run();

  return 0;
  
}
