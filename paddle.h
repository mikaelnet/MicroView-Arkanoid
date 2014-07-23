#ifndef __PADDLE_H
#define __PADDLE_H

#include "arduino.h"
#include "arkanoid.h"

class Paddle
{
	private:
		int pin;
		int paddle_width;
		int position;

	public:
		Paddle(int pin);
	
		void update();
		void draw();
};

#endif
