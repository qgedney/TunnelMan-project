#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

class StudentWorld;
// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp
class Actor : public GraphObject {
public:
	Actor(StudentWorld* studWorld, int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) :
		m_studentWorld(studWorld), GraphObject( imageID, startX, startY,  dir, size, depth), m_alive(true), m_isVis(true) {
		setVisible (true);
	}
	virtual ~Actor() {};
	virtual void doSomething() = 0;
	StudentWorld* getWorld() { return m_studentWorld; }
	bool getAliveStatus() { return m_alive; }
	bool getVis() { return m_isVis; }
	void setVis(bool input) { m_isVis = input; }
private:
	StudentWorld* m_studentWorld;
	bool m_alive;
	bool m_isVis;
};

class inanimateObjects : public Actor {
public:
	inanimateObjects(StudentWorld* studWorld, int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) : 
		Actor(studWorld, imageID, startX, startY, dir, size, depth) {}
	virtual ~inanimateObjects() {};
	virtual void doSomething() = 0;

private:

};
class Earth : public inanimateObjects {
public:

	Earth(StudentWorld* studWorld, int startX, int startY, int imageID = TID_EARTH,  Direction dir = right, double size = .25, unsigned int depth = 3) :
		inanimateObjects(studWorld, imageID, startX, startY, dir, size, depth) {}
	virtual ~Earth() {};
	virtual void doSomething() { return; }	//should do nothing

private:

};
class Person : public Actor {
public:
	Person(StudentWorld* studWorld, int imageID, int startX , int startY , Direction dir , double size, unsigned int depth, int hit) : 
		Actor(studWorld, imageID, startX, startY, dir, size, depth), m_hit(hit){}
	virtual ~Person() {};
	virtual void doSomething() = 0;		// = 0 ? 

private:
	int m_hit;

};
class TunnelMan : public Person {
public:
	TunnelMan(StudentWorld* studWorld, int imageID = TID_PLAYER, int startX = 30, int startY = 60, Direction dir = right, double size = 1.0, unsigned int depth = 0, int hit = 10) :
		Person(studWorld, imageID, startX, startY, dir, size, depth, hit), m_water(5), m_sonar(1), m_goldNugs(0) {}
	virtual ~TunnelMan() {};
	virtual void doSomething();

private:
	int m_water;
	int m_sonar;
	int m_goldNugs;

};

#endif // ACTOR_H_
