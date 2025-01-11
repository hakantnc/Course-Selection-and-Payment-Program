//Hakan Tunc
#include "Student.h"
#include "OnlineCourse.h"
//Default Constructor
Student::Student() {
	cout << "Default Constructor - Student" << endl;
}; 
//Destructor
Student::~Student() {
	cout << "Destructor - Student" << endl;
};
//Constructor of Parameters
Student::Student(string _name, string _surname, string _email, string _enrolled_courses, int _course_count) {
	name = _name; surname = _surname; email = _email; enrolled_courses = _enrolled_courses; course_count = _course_count;
	cout << "Constructor of Parameters - Student" << endl;
}
//Overload of parameter ">>" this same of "cin" parameter, Student's information
istream& operator >>(istream& input, Student& student) {
	cout << "\nEnter Name: ";
	input >> student.name;
	cout << "\nEnter Surname: ";
	input >> student.surname;
	cout << "\nEnter E-mail: ";
	input >> student.email;
	return input;
};
//Overload of parameter ">>" this same of "cout" parameter, Student's information
ostream& operator <<(ostream& output, Student& student) {
	output << "Name: " << student.name << endl;
	output << "Surname: " << student.surname << endl;
	output << "E-mail: " << student.email << endl;
	return output;
};
//Return private members to accessable
string Student::getEnrolled_courses() { return enrolled_courses; };
int Student::getCourse_count() { return course_count; };

void Student::setCourse_count(int _course_count) { course_count = _course_count; }
void Student::setEnrolled_course(string _enrolled_courses ) { enrolled_courses=_enrolled_courses; }

void Student::viewEnrolledCourse(Student& student) { //Show student's enrolled courses.
	if (enrolled_courses.empty()) //If student's don't have any course.
	{
		cout << "\nYou don't have already enrolled course." << endl;
	}
	else
	{
		cout << "\nYour Enrolled Courses:" << endl;
		cout << enrolled_courses << endl;
	}
}