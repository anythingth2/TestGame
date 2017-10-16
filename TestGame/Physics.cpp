#include "Physics.h"


Physics::Physics()
{
	
}
void Physics::setPos(Transformable* a,float i, float j)
{
	a->setPosition(i, j);
}

void Physics::Projectile(Transformable* a)
{
	Clock c; 
	Time t=c.getElapsedTime();
	Int32 tint = t.asMilliseconds(),temp=tint+500,d=temp-tint;
	float i=0, j=0;
	t = c.getElapsedTime();
	tint = t.asMilliseconds();
	while(abs(d) <= 500)
	{
		t = c.getElapsedTime();
		tint = t.asMilliseconds();
		d = (temp - tint);
		if (abs(d) <= 500)
		{
			i = 0;
			j = (500 * d*d / 250000) + 250;
		}
		a->setPosition(i,j);
		cout << "b";
		
	}




}


Physics::~Physics()
{

}

void abc::projectile(Transformable* a)
{
	Clock c;
	Time t = c.getElapsedTime();
	Int32 tint = t.asMilliseconds(), temp = tint + 500, d = temp - tint;
	float i = 0, j = 0;
	t = c.getElapsedTime();
	tint = t.asMilliseconds();
	while (abs(d) <= 500)
	{
		t = c.getElapsedTime();
		tint = t.asMilliseconds();
		d = (temp - tint);
		if (abs(d) <= 500)
		{
			i = 0;
			j = (500 * d*d / 250000) + 250;
		}
		a->setPosition(i, j);
		cout << i<<","<<j<<"\n";
		sleep(milliseconds(10));

	}
}
