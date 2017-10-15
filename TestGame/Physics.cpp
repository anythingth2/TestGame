#include "Physics.h"


Physics::Physics()
{
	
}
void Physics::setPos(Transformable* a,float i, float j)
{
	a->setPosition(i, j);
}


Physics::~Physics()
{
}
