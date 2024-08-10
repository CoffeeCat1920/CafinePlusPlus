#include "./engine/include/Core.h"

#include "./game/include/Player.h"

int main () {

  Player player = Player{ 2 * 64, 2 * 64 };
  Engine engine = Engine( 512, 256 );

  engine.AddObject(&player);

  engine.Run();

  return 0;

}
