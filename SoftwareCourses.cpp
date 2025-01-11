//Hakan Tunc
#include "SoftwareCourses.h"
//Default Constructor
SoftwareCourses::SoftwareCourses() : OnlineCourse("Software Course", "Busra Kocacinar", 50, 5, 5, 100, 5, 0.1, "You need coming with your personal notbook.", 25, 5) {
	cout << "Default Constructor - Software Courses" << endl;//We write details for Software Course here because this details don't change anywhere there are constant. We access to this details.
}
//Destructor
SoftwareCourses::~SoftwareCourses() {
	cout << "Destructor - Software Courses" << endl;
}
//Constructor of Parameters
SoftwareCourses::SoftwareCourses(string _course_name, string _instructor, int _total_capacity,
	int _enrolled_students, int _total_duration, double _price, int _level, double _discount_rate, string _prerequisites, double _total_rate, int _rate_count,
	string _book_name, string _programming_language,string _ide, int _number_of_assignments):
	OnlineCourse(_course_name, _instructor, _total_capacity, _enrolled_students,  _total_duration, _price, _level, _discount_rate, _prerequisites, _total_rate, _rate_count)
{
	cout << "Constructor of Parameters - Software Courses" << endl;
	book_name = _book_name;
	programming_language = _programming_language;
	ide = _ide;
	number_of_assignments = _number_of_assignments;
};
//Return private members to accessable
string SoftwareCourses::getBookName() {return book_name;};
string SoftwareCourses::getProgrammingLanguage() {return programming_language;};
string SoftwareCourses::getIDE(){return ide;};
int SoftwareCourses::getAssignments() {return number_of_assignments;};

//Display information of Software Course
void SoftwareCourses::displayInfo() const {
	cout << "\n****Displaying Software Course Details****\n" << endl;
	OnlineCourse::displayInfo(); //Display in OnlineCourse constant details.
	cout << "* Book Name: * " << book_name <<" *"<< endl;
	cout << "* Programming Language: * " << programming_language << " *" << endl;
	cout << "* Using  IDE: * " << ide << " *" << endl;
	cout << "* Number of assignments in the course: * " << number_of_assignments << " *" << endl;
	cout << "\n******************************************\n";
};
//Check capacity of this course return OnlineCourse's checkCapacity function because same for all courses.
bool SoftwareCourses::checkCapacity() {
	return OnlineCourse::checkCapacity();
};
//Add student to this course return OnlineCourse's addStudent function because same for all courses.
bool SoftwareCourses::addStudent(Student& student) {
	return OnlineCourse::addStudent(student);
};
//Rate to this course, return OnlineCourse's rateCourse function because same for all courses.
void SoftwareCourses::rateCourse() {
	return OnlineCourse::rateCourse();
};