#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include <string>
#include<vector>
#include "Actor.h"
// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp

class StudentWorld : public GameWorld
{
public:
	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
		
	}

	//creates current levels oil field and populating it
	virtual int init()
	{
		/*
		m_Tman = new TunnelMan(this);

		for (int i = 0; i != 64; i++) {
			for (int j = 0; j != 64; j++) {
				if ((i < 30 || i > 33) && j <= 59) {
					m_earthObjects[i][j] = new Earth(this, i, j);
				}
				else
					m_earthObjects[i][j] == nullptr;
			}
		}
		for (int k = 30; k <= 33; k++) {
			for (int l = 0; l != 4; l++) {
				m_earthObjects[k][l] = new Earth(this, k, l);
			}
		}

		*/
		return GWSTATUS_CONTINUE_GAME;
		
	}

	virtual int move()
	{
		//m_Tman->doSomething();
			//delete the earth
			//int k = m_Tman->getX();
			//int l = m_Tman->getY();
			//for (int i = k; i <= k+3 ; i++) {
			//	for (int j = l; j <= l+3 ; j++) {
			//		if (m_earthObjects[i][j]!=nullptr && m_earthObjects[i][j] -> getVis()) {
			//			m_earthObjects[i][j]->setVisible(false);
			//			m_earthObjects[i][j] -> setVis(false);
			//			playSound(SOUND_DIG);
						//m_earthObjects[i][j] = nullptr;
			//		}
			//	}
			//}
			 
		
		// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
		// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
		decLives();
		return GWSTATUS_PLAYER_DIED;
		//return GWSTATUS_CONTINUE_GAME;
	}

	virtual void cleanUp()
	{
		/*
		delete m_Tman;
		for (int i = 0; i != 64; i++) {
			if(m_earthObjects[i]!= nullptr)
				delete[] m_earthObjects[i];
		}
		delete[]  m_earthObjects;
		*/
	}

	virtual ~StudentWorld() {
		/*
		delete m_Tman;
		for (int i = 0; i != 64; i++) {
			if (m_earthObjects[i] != nullptr)
				delete[] m_earthObjects[i];
		}
		delete[]  m_earthObjects;
		*/
	}

private:
	//std::vector<Actor*> m_gameObjects;
	Earth* m_earthObjects[64][64] = { 0 };
	TunnelMan* m_Tman;
};

#endif // STUDENTWORLD_H_
