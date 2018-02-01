//plant.cpp

#include "plant.h"
#include <string>
using namespace std;

plant::plant(){};

plant::plant(float h, string s) {
	height = h;
	species = s;
}

void plant::setSpecies(string newSpeciesName) {
	species = newSpeciesName;
	return;
}

string plant::getSpecies() {
	return species;
}

void plant::setHeight(float newHeight) {
	height = newHeight;
	return;
}

float plant::getHeight() {
	return height;
}

