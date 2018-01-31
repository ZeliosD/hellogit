//plant.h

#ifndef PLANT_H
#define STUDENT_H
#include string
 
class plant() {
	private:
		float height;
		std::string species;
	public:
		plant(float h, std::string s);
		void setSpecies(std::string newSpeciesName);
		std::string getSpecies();
		void setHeight(float newHeight);
		float getHeight();
};
