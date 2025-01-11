//Hakan Tunc
#pragma once
#include "OnlineCourse.h"
class FitnessCourses : public OnlineCourse //We say here FitnessCourses subclass of OnlineCourse
{
private:
	string health_tips= "You can see every tips on our mobile application.";
	string sport_types = "| Zumba | Crunch | Body Building | Fitness | Yoga | Boxing |";
	int nutrition_programs = 5; //How many nutrition programs of a week
	int training_programs = 1; //How many training programs of a week
	bool equipment_required = 1; // We give 1 because this course need equipment.

public:
	FitnessCourses(); //Default Constructor
	~FitnessCourses(); //Destructor

	FitnessCourses(string, string, int, int, int, double, int, double, string,double, int, string, string,int, int, bool); //Constructor of Parameter
	//We use "get" functions because we should achieve private members we will return they.
	string getHealth_tips(); //return health tips
	string getSport_types(); //return sport types
	int getNutrition_programs(); //return nutrition programs
	int getTraining_programs(); //return training programs
	bool getEquipment_required(); //return equipment required.


	void displayInfo() const; //display information for this course.
	bool checkCapacity(); //check capacity for this course.
	bool addStudent(Student& student); //add student the this course
	void rateCourse(); //rate this course
};

