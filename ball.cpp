#include "ball.h"
#include "arkanoid.h"

#include <MicroView.h>

Ball::Ball(int x, int y)
{
  this->x = x;
  this->y = y;  
}

void Ball::update()
{
  x += velocity_x;
  y += velocity_y;  
  
  if ( (x <= 0 && velocity_x < 0) ||
       (x >= SCREEN_W-1 && velocity_x > 0) )
       velocity_x = -velocity_x;

  if ( (y <= 0 && velocity_y < 0) ||
       (y >= SCREEN_H-1 && velocity_y > 0) )
       velocity_y = -velocity_y;
}

void Ball::draw() 
{
  uView.circleFill(x, y, 2);
}
