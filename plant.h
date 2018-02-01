//plant.h

#ifndef PLANT_H
#define STUDENT_H
#include <string>
using namespace std;
 
class plant{
	private:
		float height;
		std::string species;
	public:
		plant(float, string);
		void setSpecies(string);
		string getSpecies();
		void setHeight(float);
		float getHeight();
};
#endif
