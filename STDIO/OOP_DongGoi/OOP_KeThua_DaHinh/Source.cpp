#include <stdio.h>
class Position2D
{
public:
	Position2D();
	~Position2D();
	Position2D(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void SetData(int x, int y);
private:
	int x, y;

};
void Position2D::SetData(int x, int y)
{
	this->x = x;
	this->y = y;
}
Position2D::Position2D()
{
}

Position2D::~Position2D()
{
}
class Wheel
{
public:
	Wheel();
	~Wheel();
	Wheel(float r)
	{
		this->R = r;
	}
private:
	float R;
	float Limit;
};

Wheel::Wheel()
{
}

Wheel::~Wheel()
{
}

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	void TurnLeft() {};
	void TurnRight() {};
	void RunTraight() {};
	void RunBack() {};
private:
	float MaxSpeed;
	int Guarantee;
	bool IsMart;
	
	
};

Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}

class Bicycle:public Vehicle
{
public:
	Bicycle();
	~Bicycle();
	void RunRight() {};
private:
	Position2D Pos;
	Wheel Wheels[2];
	float Weight;
	float Cost;


};

Bicycle::Bicycle()
{
}

Bicycle::~Bicycle()
{
}
class Car:public Vehicle
{
public:
	Car();
	~Car();

private:
	Wheel Wheels[4];
	bool HasABS;

};

Car::Car()
{
}

Car::~Car()
{
}
int main()
{
	Bicycle a;
	while (true);
	return 0;
}