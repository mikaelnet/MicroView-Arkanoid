#include "paddle.h"

#include <MicroView.h>

Paddle::Paddle (int pin) 
{
	this->pin = pin;
	paddle_width = 10;
	
	position = SCREEN_W/2;
}


void Paddle::update()
{
	int val = analogRead(pin);
	position = val / (1024/SCREEN_W);
}

void Paddle::draw()
{
  int left = position - paddle_width/2;
  uView.lineH(left, SCREEN_H-3, paddle_width);
  uView.lineH(left-1, SCREEN_H-2, paddle_width+2);
  uView.lineH(left, SCREEN_H-1, paddle_width);
}


