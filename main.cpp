#include "./engine/include/Core.h"
#include "./game/include/Player.h"

int main () {

  Engine engine = Engine( 512, 256 );
  
  Player player = Player{ 2 * 64, 2 * 64 };
  
  engine.AddObject(&player);
   
  engine.Run();

  return 0;
  
}
