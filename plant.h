//plant.h

#ifndef PLANT_H
#define STUDENT_H
class plant() {
	private:
		float height;
		std::string species;
	public:
		plant(float h, std::string s) {
			height = h;
			species = s;
		}

		void setSpecies(std::string newSpeciesName) {
			species = newSpeciesname;
			return;
		}

		std::string getSpecies() {
			return species;
		}

		void setHeight(float newHeight) {
			height = newHeight;
			return;
		}

		float getHeight() {
			return height;
		}
};
