#include "Vehicle.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
	auto car{Car(0, 0) };
	auto boat{Boat(0, 0) };
	auto airplane{Airplane(0, 0) };

	auto vehicles{ vector<Vehicle*>({&car, &boat, &airplane}) };

	for (int i = 0; i < vehicles.size(); ++i) {
		cout << vehicles[i]->getType() << endl;
		vehicles[i]->displayPosition();
		vehicles[i]->drive(1, 1);
		vehicles[i]->displayPosition();
		cout << endl;
	}

	return 0;
}