//Hakan Tunc
#include "ProfessionalDevelopmentCourses.h"
//Default Constructor
ProfessionalDevelopmentCourses::ProfessionalDevelopmentCourses(): OnlineCourse("Professional Development Course", "Fatma Parlar Bulut", 24, 2, 4, 250, 5, 0.2, "You need coming with your personal notbook.", 10.8, 5) {
	cout << "Default Constructor - Professional Development Course" << endl; //We write details for Development Course here because this details don't change anywhere there are constant. We access to this details.
};
//Destructor
ProfessionalDevelopmentCourses::~ProfessionalDevelopmentCourses() {
	cout << "Destructor - Professional Development Course" << endl;
};
//Constructor of Parameters
ProfessionalDevelopmentCourses::ProfessionalDevelopmentCourses(string _course_name, string _instructor, int _total_capacity,
	int _enrolled_students, int _total_duration, double _price, int _level, double _discount_rate, string _prerequisites, double _total_rate, int _rate_count,
	string _topic, bool _certificates, string _achievements) : OnlineCourse(_course_name, _instructor, _total_capacity, _enrolled_students, _total_duration, _price, _level, _discount_rate, _prerequisites, _total_rate, _rate_count)
{
	cout << "Constructor of parameters - Professional Development Courses" << endl;
	topic = _topic; certificates = _certificates; achievements = _achievements;
};
//Return private members to accessable
string ProfessionalDevelopmentCourses::getTopic() { return topic; };
bool ProfessionalDevelopmentCourses::getCertificates() { return certificates; };
string ProfessionalDevelopmentCourses::getAchievements() { return achievements; };

//Display information of Professional Development Course
void ProfessionalDevelopmentCourses::displayInfo() const {
	cout << "\n**Displaying Professional Development Course Details**\n" << endl;
	OnlineCourse::displayInfo(); //Display in OnlineCourse constant details.
	cout << "* Topic: * " << topic << " *" << endl;
	cout << "* Achievements of Course: * " << achievements << " *" << endl;
	cout << "* Certificates: * " << (certificates ? "Yes,There is a certificate in this course.":"No, There isn't a certificate in this course.") << " *" << endl;
	cout << "\n******************************************************\n"; 
};
//Check capacity of this course return OnlineCourse's checkCapacity function because same for all courses.
bool ProfessionalDevelopmentCourses::checkCapacity() {
	return OnlineCourse::checkCapacity();
};
//Add student to this course return OnlineCourse's addStudent function because same for all courses.
bool ProfessionalDevelopmentCourses::addStudent(Student& student) {
	return OnlineCourse::addStudent(student);
};
//Rate to this course, return OnlineCourse's rateCourse function because same for all courses.
void ProfessionalDevelopmentCourses::rateCourse() {
	return OnlineCourse::rateCourse();
};
