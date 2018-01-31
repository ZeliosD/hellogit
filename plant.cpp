//plant.cpp

include 'plant.h'

plant::plant(float h, std::string s) {
	height = h;
	species = s;
}

void plant::setSpecies(std::string newSpeciesName) {
	species = newSpeciesname;
	return;
}

std::string plant::getSpecies() {
	return species;
}

void plant::setHeight(float newHeight) {
	height = newHeight;
	return;
}

float plant::getHeight() {
	return height;
}

