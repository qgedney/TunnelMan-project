#include "Actor.h"
#include "StudentWorld.h"
/*
// Students:  Add code to this file (if you wish), Actor.h, StudentWorld.h, and StudentWorld.cpp
void TunnelMan::doSomething() {
	if (this->getAliveStatus() == false) {
		return;						//if player is dead return immediately
	}
	//if tunnelMan's image over laps with any earth objects, call studentWorld to remove/destroy the earth objects & play digging sound

	//otherwise, check to see if player pressed a key
	int ch;
	if (getWorld()->getKey(ch) == true) {
		switch (ch) {
		case KEY_PRESS_LEFT:
			if (this->getDirection() == left && this->getX() > 0) {
				//move player left if already facing left
				moveTo(this->getX() - 1, this->getY());
			}
			else {
				//else face left
				this->setDirection(left);
			}
			break;
		case KEY_PRESS_RIGHT:
			if (this->getDirection() == right && this->getX() < 60 ) {
				//move player right if already facing right
				moveTo(this->getX() + 1, this->getY());
			}
			else {
				//else face right
				this->setDirection(right);
			}
			break;
		case KEY_PRESS_SPACE:
			//add a squirt in front of the player
			break;
		case KEY_PRESS_ESCAPE:
			//abort current level
			//tunnelMan should be completely annoyed, aka dead
			break;
		case KEY_PRESS_UP:
			if (this->getDirection() == up && this->getY() < 59 ) {
				//move player up if already facing up
				moveTo(this->getX(), this->getY() + 1);
			}
			else {
				//else face up
				this->setDirection(up);
			}
			break;
		case KEY_PRESS_DOWN:
			if (this->getDirection() == down && this->getY() > 0) {
				//move player down if already facing down
				moveTo(this->getX(), this->getY() - 1);
			}
			else {
				//else face down
				this->setDirection(down);
			}
			break;
		case KEY_PRESS_TAB:
			//drop a gold nugget that has a lifetime of 100 game ticks, and is only pickupable by protestors
			break;
		case 'z':
		case 'Z':
			//use sonar charge to illuminate contents of the oil field withina  radius of 12
			//decrease sonar charge count
			//all hidden game objects must be made visible using setVisible()
			break;
		}
	}


}
*/