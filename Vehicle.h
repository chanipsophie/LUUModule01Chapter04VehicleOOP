#pragma once
#include <string>

class Vehicle
{
protected:
	int _positionX;
	int _positionY;
	std::string _type;

public:
	Vehicle(int x, int y) : _positionX(x), _positionY(y)
	{

	}

	virtual void drive(int x, int y) = 0;

	void displayPosition();

	std::string getType() { return _type; };
};

class Car : public Vehicle
{
public:
	Car(int x, int y): Vehicle(x, y) {
		_type = "Car";
	}

	void drive(int x, int y);
};

class Boat : public Vehicle
{
public:
	Boat(int x, int y) : Vehicle(x, y) {
		_type = "Boat";
	}

	void drive(int x, int y);
};

class Airplane : public Vehicle
{
public:
	Airplane(int x, int y) : Vehicle(x, y) {
		_type = "Airplane";
	}

	void drive(int x, int y);
};