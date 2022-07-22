#include "Vehicle.h"
#include <iostream>

using namespace std;

void Vehicle::displayPosition() {
	cout << "My position is: (" << _positionX << ", " << _positionY << ")" << endl;
}

void Car::drive(int x, int y) {
	_positionX += x;
	_positionY += y;
}

void Boat::drive(int x, int y) {
	_positionX += 2 * x;
	_positionY += 2 * y;
}

void Airplane::drive(int x, int y) {
	_positionX += 3 * x;
	_positionY += 3 * y;
}

