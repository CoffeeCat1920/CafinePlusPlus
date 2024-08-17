#include "../../engine/include/Entity.h"
#include "../../engine/include/Camera.h"
#include <string>

class Player : public Entity {

private:

  Cams *cam;

public:

  Player( float positionX, float positionY) : 
    Entity( "player", positionX, positionY, "./game/resource/player.png", 4 )
  {
    cam = Cams::GetInstance();
  }

  void Init() override;
  void Update() override;
  void Draw() override;

};
