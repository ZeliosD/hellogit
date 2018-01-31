//main.cpp

#include <iostream>
#include <vector>
#include 'plant.h'

using namespace std;

main() {
	vector <plant> garden;
	plant newPlant;
	string name;
	float height;
	for (int i = 0; i<4; i++) {
		cin >> name;
		cin >> height;
		garden.push_back(plant newPlant(height, name));
	}
	for (int i = 0; i<garden.size(); i_++) {
		cout << garden[i]<<endl;
	}
	for (int i = 0; i<garden.size(); i++) {
		garden.pop_back();
	}
return;
}
