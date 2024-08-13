#include "../../engine/include/Entity.h"
#include <string>

class Player : public Entity {

private:


public:

  Player( float positionX, float positionY) : 
    Entity( "player", positionX, positionY, "./game/resource/player.png", 4 )
  {}

  void Init() override;
  void Update() override;
  void Draw() override;

};
