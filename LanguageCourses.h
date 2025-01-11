//Hakan Tunc
#pragma once
#include "OnlineCourse.h"
class LanguageCourses : public OnlineCourse  //We say here LanguageCourses subclass of OnlineCourse
{
private:
	string language = "English";
	bool native_speaker = 0;
	string language_level = "Beginner to Intermediate";
	string certificate = "TOEFL Certificate";
public:
	LanguageCourses(); //Default Constructor
	~LanguageCourses(); //Destructor

	LanguageCourses(string, string, int, int, int, double, int, double, string, double, int, string, bool, string, string);
	//We use "get" functions because we should achieve private members we will return they.
	string getLanguage(); //return topic of language
	bool getNative_speaker(); //return for instructor's native language or not.
	string getLanguage_level(); // retun Which level of course say us.
	string getCertificate(); //return Certificate type

	void displayInfo() const; // display information for this course.
	bool checkCapacity(); //check capacity for this course.
	bool addStudent(Student& student);//add student the this course
	void rateCourse();//rate this course
};

