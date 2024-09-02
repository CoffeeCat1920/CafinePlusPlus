#include "../include/ObjectTree.h"

void ObjectTree::Devide() {

  float x = this->rec.x;
  float y = this->rec.y;
  float w = this->rec.width;
  float h = this->rec.height;

  this->ne = new ObjectTree( x + w/2, y, w/2, h/2, this->capacity );
  this->nw = new ObjectTree( x, y, w/2, h/2, this->capacity );
  this->sw = new ObjectTree( x, y + h/2, w/2, h/2, this->capacity );
  this->se = new ObjectTree( x + w/2, y + h/2, w/2, h/2, this->capacity );
  
  this->isDevided = true;

}
