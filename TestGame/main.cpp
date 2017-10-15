#include<SFML\Graphics.hpp>
#include<iostream>
#include<conio.h>
#include "Physics.h"
using namespace sf;
using namespace std;


int main()
{
	Clock Clk;
	Time t = Clk.getElapsedTime();
	Int32 tint=0;
	Int32 temp=0;
	Physics p;
	

	ContextSettings csx;
	csx.antialiasingLevel = 10;
	RenderWindow window(VideoMode(1200,800), "TestGame");
	CircleShape a(50);
	a.setFillColor(Color(60, 255, 185));
	float i=0, j=0,speed=1;
	Vector2f test=Vector2f(i,j);
	a.setPosition(test);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == Event::Closed)
				window.close();

			if (Keyboard::isKeyPressed(Keyboard::D))
			{
				i += speed;
			}
			else if (Keyboard::isKeyPressed(Keyboard::A))
			{
				i -= speed;
				
			}
			else if (Keyboard::isKeyPressed(Keyboard::S))
			{
				j += speed;
			}
			else if (Keyboard::isKeyPressed(Keyboard::W))
			{
				j -= speed;
			}
			else if (Keyboard::isKeyPressed(Keyboard::O))
			{
				speed += 5;
				if (speed >= 50)
				{
					speed = 50;
				}
			}
			else if (Keyboard::isKeyPressed(Keyboard::L))
			{
				speed -= 5;
				if (speed <=0)
				{
					speed = 1;
				}
			}
			else if (Keyboard::isKeyPressed(Keyboard::Space))
			{
				
				j = 800-2*a.getRadius();
				t = Clk.getElapsedTime();
				tint = t.asMilliseconds();
				temp = tint + 500;
			}
			
			Vector2f pcir = a.getPosition();
			int d = tint - temp;
			float cx = pcir.x, cy = pcir.y;
			cout << "\n\nTime: " << tint<<","<<d<< "\nPos: " << cx<<","<<cy;

		}
		
		t = Clk.getElapsedTime();
		tint = t.asMilliseconds();
		int d = (temp - tint);
		if (abs(d) <= 500)
		{
			i = i;
			j = (500*d*d / 250000)+300-2* a.getRadius();

			
			cout << d << "\n";
		}
		window.clear();
		test = Vector2f(i, j);
		
		p.setPos(&a, i, j);
		window.draw(a);
		window.display();
		

	}
}