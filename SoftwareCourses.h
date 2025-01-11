//Hakan Tunc
#pragma once
#include "OnlineCourse.h"
class SoftwareCourses :public OnlineCourse  //We say here SoftwareCourses subclass of OnlineCourse
{
private:

	string book_name = "D. S. MALIK, C++ PROGRAMMING: PROGRAM DESIGN INCLUDING DATA STRUCTURES, 8TH EDITION, 2017";
	string programming_language = "C++";
	string ide = "Visual Studio";
	int number_of_assignments = 12;

public:
	SoftwareCourses(); //Default Constructor
	SoftwareCourses(string, string, int, int, int, double, int, double, string, double, int, string, string,string,int); //Constructor of Parameters
	~SoftwareCourses(); //Destructor
	//We use "get" functions because we should achieve private members we will return they.
	string getBookName(); //return book name
	string getProgrammingLanguage(); //return programming language
	string getIDE(); //return IDE name
	int getAssignments(); //return assignment's number.
	
	void displayInfo() const;//display information for this course.
	bool checkCapacity(); //check capacity for this course.
	bool addStudent(Student& student); //add student the this course
	void rateCourse(); //rate this course
};