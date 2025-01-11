//Hakan Tunc
#include "FitnessCourses.h"
//Default Constructor
FitnessCourses::FitnessCourses():OnlineCourse("Fitness Course ", "Michael Turner", 20, 15, 4, 100, 5, 0.2, "There is no participation in the course without a towel.", 30, 10) {
	cout << "Default Constructor - Fitness Course" << endl; //We write details for Fitness Course here because this details don't change anywhere there are constant. We access to this details.
}
//Destructor
FitnessCourses::~FitnessCourses() {
	cout << "Destructor - Fitness Course" << endl;
}
//Constructor of Parameters
FitnessCourses::FitnessCourses(string _course_name, string _instructor, int _total_capacity,
	int _enrolled_students, int _total_duration, double _price, int _level, double _discount_rate, string _prerequisites, double _total_rate, int _rate_count,
	string _health_tips, string _sport_types, int _nutrition_programs, int _training_programs, bool _equipment_required):OnlineCourse(_course_name, _instructor, _total_capacity, _enrolled_students, _total_duration, _price, _level, _discount_rate, _prerequisites, _total_rate, _rate_count)
{
	cout << "Constructor of Parameters - Fitness Courses" << endl;
	health_tips = _health_tips; sport_types = _sport_types; nutrition_programs = _nutrition_programs; training_programs = _training_programs;
	equipment_required = _equipment_required;
};
//Return private members to accessable
string FitnessCourses::getHealth_tips() { return health_tips; };
string FitnessCourses::getSport_types() { return sport_types; };
int FitnessCourses::getNutrition_programs() { return nutrition_programs; };
int FitnessCourses::getTraining_programs() { return training_programs; };
bool FitnessCourses::getEquipment_required() { return equipment_required; };


//Display information of Fitness Course
void FitnessCourses::displayInfo() const {
	cout << "\n*****Displaying Fitness Course Details*****\n" << endl;
	OnlineCourse::displayInfo(); //Display in OnlineCourse constant details.
	cout << "* Health Tips: * " << health_tips << " *" << endl;;
	cout << "* Sport Types: * " << sport_types << " *" << endl;;
	cout << "* Nutrition Programs: * " << nutrition_programs << " days of a week." " *" << endl;;
	cout << "* Training Programs: * " << training_programs <<" days of a week."<< " *" << endl;;
	cout << "* Is Equipment Required: * " << (equipment_required? "Yes, Equipment is required.": "No, Equipment isn't required.") << " *" << endl;;
	cout << "\n*******************************************\n";
};

//Check capacity of this course return OnlineCourse's checkCapacity function because same for all courses.
bool FitnessCourses::checkCapacity() {
	return OnlineCourse::checkCapacity();
};
//Add student to this course return OnlineCourse's addStudent function because same for all courses.
bool FitnessCourses::addStudent(Student& student) {
	return OnlineCourse::addStudent(student);
};
//Rate to this course, return OnlineCourse's rateCourse function because same for all courses.
void FitnessCourses::rateCourse() {
	return OnlineCourse::rateCourse();
};
