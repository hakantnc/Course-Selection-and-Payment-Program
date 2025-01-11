//Hakan Tunc
#include "LanguageCourses.h"
//Default Constructor
LanguageCourses::LanguageCourses():OnlineCourse("Language Course ", "Murat Yerlikaya", 12, 3, 3, 150, 5, 0.4, "You should be preparation exam before the course.", 32.5, 8) {
	cout << "Default Constructor - Language Course" << endl; //We write details for Language Courses here because this details don't change anywhere there are constant. We access to this details.
};
//Destructor
LanguageCourses::~LanguageCourses() {
	cout << "Destructor - Language Course" << endl;
};
//Constructor of Parameters
LanguageCourses::LanguageCourses(string _course_name, string _instructor, int _total_capacity,
	int _enrolled_students, int _total_duration, double _price, int _level, double _discount_rate, string _prerequisites, double _total_rate, int _rate_count,
	string _language, bool _native_speaker, string _language_level, string _certificate) :
	OnlineCourse(_course_name, _instructor, _total_capacity, _enrolled_students, _total_duration, _price, _level, _discount_rate, _prerequisites, _total_rate, _rate_count)
{
	cout << "Constructor of Parameters - Language Courses" << endl;
	native_speaker = _native_speaker; language = _language;
	language_level = _language_level; certificate = _certificate;
};
//Return private members to accessable
string LanguageCourses::getLanguage() { return language; };
bool LanguageCourses::getNative_speaker() { return native_speaker; };
string LanguageCourses::getLanguage_level() { return language_level; };
string LanguageCourses::getCertificate() { return certificate; };

//Display information of Language Course
void LanguageCourses::displayInfo() const{
	cout << "\n****Displaying Language Course Details****\n" << endl;
	OnlineCourse::displayInfo(); //Display in OnlineCourse constant details.
	cout << "* Language: * " << language << " *" << endl;
	cout << "* Instructor's Native Language: * " << (native_speaker ? "Yes, Instructor's native language": "No, Instructor's not native language") << " *" << endl;
	cout << "* Language Level: * " << language_level << " *" << endl;
	cout << "* Certificate: * " << certificate << " *" << endl;
	cout << "\n******************************************\n";
};
//Check capacity of this course return OnlineCourse's checkCapacity function because same for all courses.
bool LanguageCourses::checkCapacity() {
	 return OnlineCourse::checkCapacity();
};
//Add student to this course return OnlineCourse's addStudent function because same for all courses.
bool LanguageCourses::addStudent(Student& student) {
	return OnlineCourse::addStudent(student);
};
//Rate to this course, return OnlineCourse's rateCourse function because same for all courses.
void LanguageCourses::rateCourse() {
	return OnlineCourse::rateCourse();
};