//main.cpp

#include <iostream>
#include <vector>
#include <string>
#include "plant.h"

using namespace std;

int main() {
	vector<plant> garden;
	plant newPlant();
	string name;
	float height;
	for (int i = 0; i<4; i++) {
		cin >> name;
		cin >> height;
		newPlant.setHeight(height);
		newPlant.setSpecies(name);		
		garden.push_back(newPlant);
	}
	for (int i = 0; i<garden.size(); i++) {
		cout << garden[i].getHeight() << endl;
	}
	for (int i = 0; i<garden.size(); i++) {
		garden.pop_back();
	}
return 0;
}
