#ifndef __BALL_H
#define __BALL_H

class Ball
{
  private:
    int x;
    int y;
    int velocity_x;
    int velocity_y;
    
  public:
    Ball(int x, int y);

    void update();
    void draw();
};


#endif
