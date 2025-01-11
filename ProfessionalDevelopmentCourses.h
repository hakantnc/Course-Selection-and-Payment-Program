//Hakan Tunc
#pragma once
#include "OnlineCourse.h"
class ProfessionalDevelopmentCourses :public OnlineCourse //We say here ProfessionalDevelopmentCourses subclass of OnlineCourse
{
private:
	string topic="Beginner to Intermediate FullStack Development";
	bool certificates = 1;
	string achievements = "You can develop websites, mobile apps and desktop apps.";
public:
	ProfessionalDevelopmentCourses(); //Default Constructor
	~ProfessionalDevelopmentCourses(); //Destructor

	ProfessionalDevelopmentCourses(string, string, int, int, int, double, int, double, string, double, int, string, bool, string);
	//We use "get" functions because we should achieve private members we will return they.
	string getTopic(); //return topic of course.
	bool getCertificates(); //return certificate is there or not.
	string getAchievements(); //return achievement of course.

	void displayInfo() const; //display information for this course.
	bool checkCapacity(); //check capacity for this course.
	bool addStudent(Student& student); //add student the this course
	void rateCourse(); //rate this course
};

