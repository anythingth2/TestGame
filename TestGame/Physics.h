#pragma once
#include<SFML\Graphics.hpp>
#include<SFML\System.hpp>
#include<iostream>
using namespace sf;
using namespace std;

class Physics
{
private:
	

public:
	Physics();
	void setPos(Transformable* a,float i,float j);
	void Projectile(Transformable* a);
	~Physics();
};

namespace abc {
	void projectile(Transformable* a);
}

