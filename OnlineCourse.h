//Hakan Tunc
#pragma once
#include <iostream>
#include "Student.h"
using namespace std;
class OnlineCourse
{
protected:                      //We use private because we don't want access everybody.
	string course_name ="Unknown Course"; //If we don't any name, print it.
	string instructor = "Unknown Instructor"; //If we don't any name, print it.

	int total_capacity = 0; //If we don't any integer,print it.
	int enrolled_students = 0; //If we don't any integer, print it. 
	double course_rates = 0.0; //If we don't any integer, print it. 
	int total_duration = 0; //If we don't any integer, print it.
	double price = 0.0; //If we don't any integer, print it.
	int level = 0; //If we don't any integer, print it.
	double discount_rate = 0.0; //If we don't any integer, print it.
	 
	string prerequisites = "No Information"; 

	double enter_rate = 0;
	double total_rate = 0;
	int rate_count = 0;

public:
	OnlineCourse(); //Default Constructor
	OnlineCourse(string, string, int,int, int, double, int, double, string, double, int); //Constructor of Parameters
	~OnlineCourse(); //Destructor

	//We use "get" functions because we should achieve private members we will return they.
	string getCourseName(); //return course name
	string getInstructor(); //return instructor name
	int getTotalCapacity();  // return total capacity
	int getEnrolledStudent(); //return enrolled student
	int getTotalDuration(); //return total duration
	int getLevel();  //return course level
	double getCourseRate(); //return course's rate
	double getPrice(); //return price
	double getDiscountRate(); //return discount rate
	string getPrerequisites(); //return prerequisites

	double getEnter_rate();
	double getTotal_rate();
	int getRate_count();

	virtual void displayInfo() const = 0;  //We use "const" because we don't want change course informations.
	virtual bool checkCapacity()= 0; //We use "bool" function because if capacity full we want "yes" or "no".
	virtual bool addStudent(Student& student)= 0;
	virtual void rateCourse() = 0;
};

