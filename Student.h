//Hakan Tunc
#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	string surname;
	string email;
	string enrolled_courses;
	int course_count = 0;
public:
	Student(); //Default Constructor
	~Student(); //Destructor
	Student(string,string,string,string,int); //Constructor of Parameters
	friend istream& operator>> (istream& input, Student& student); //Here we overload of parameter ">>" this same of "cin" parameter.
	friend ostream& operator<< (ostream& output, Student& student); //Here we overload of parameter "<<" this same of "cout" parameter.
	string getEnrolled_courses(); //Return enrolled courses.
	int getCourse_count(); //Return course count of student.
	//We use "set" functions because we should return a controlled value with the "get" function.
	void setEnrolled_course(string);
	void setCourse_count(int);
	void viewEnrolledCourse(Student& student);
};



