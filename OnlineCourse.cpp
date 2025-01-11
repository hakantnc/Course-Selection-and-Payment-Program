//Hakan Tunc
#include "OnlineCourse.h"
//Default Constructor
OnlineCourse::OnlineCourse() {   
	cout << "Default Constructor-Online Course" << endl;
};

//Destructor
OnlineCourse::~OnlineCourse() {
	cout << "Destructor - Online Course" << endl;
};

//Constructor Of Parameters
OnlineCourse::OnlineCourse(string _course_name, string _instructor, int _total_capacity,
	int _enrolled_students, int _total_duration, double _price, int _level, double _discount_rate, string _prerequisites,
	double _total_rate, int _rate_count)
{
	cout << "Constructor of Parameters - Online Course" << endl;
	course_name = _course_name; instructor = _instructor;
	total_capacity = _total_capacity; enrolled_students = _enrolled_students; total_duration = _total_duration;
	price = _price; level = _level; discount_rate = _discount_rate; prerequisites = _prerequisites;
	total_rate = _total_rate; rate_count = _rate_count;
	course_rates = total_rate / rate_count;
};

//Return private members to accessable
string OnlineCourse::getCourseName() {return course_name;};
string OnlineCourse::getInstructor() {return instructor;};
int OnlineCourse::getTotalCapacity() {return total_capacity;};
int OnlineCourse::getEnrolledStudent() {return enrolled_students;};
double OnlineCourse::getCourseRate() {return course_rates;};
int OnlineCourse::getTotalDuration() {return total_duration;};
double OnlineCourse::getPrice() { return price; };
int OnlineCourse::getLevel() { return level; };
double OnlineCourse::getDiscountRate() { return discount_rate; };
string OnlineCourse::getPrerequisites() { return prerequisites; };
double OnlineCourse::getEnter_rate() { return enter_rate; };
int OnlineCourse::getRate_count() { return rate_count; };
double OnlineCourse::getTotal_rate() { return total_rate; };

//Display Informations
void OnlineCourse::displayInfo() const{
	cout << "* Course Name: * " << course_name << " *" << endl;
	cout << "* Instructor Name: * " << instructor << " *" << endl;
	cout << "* Capacity of Course *" << total_capacity << " * " << endl;
	cout << "* Available Capacity: * " << total_capacity-enrolled_students << " *" << endl;
	cout << "* Total Students: * " << enrolled_students << " *" << endl;
	cout << "* Course Rates: * " << course_rates << " *" << endl;
	cout << "* Prerequisites: * " << prerequisites << " *" << endl;
	cout << "* Level: * " << level << " *" << endl;
	cout << "* Time of Course: * " << total_duration << " days per weeks." << " *" << endl;
	cout << "* Price: * " << price <<"$ " << " *" << endl;
	
};

//If capacity > students number return "0" else return "1".
bool OnlineCourse::checkCapacity(){
	return enrolled_students < total_capacity;
};
//If confirm cart add student to course.
bool OnlineCourse::addStudent(Student& student) {
	if (!checkCapacity()) //If capacity less than enrolled student.
	{
		cout << "Sorry! The Course isn't Available." << endl;
		return false; //return 0
	};
	
	for (int i = 0; i < student.getCourse_count(); i++)
	{
		if (course_name == student.getEnrolled_courses()) //if course's name here in the student's enrolled course list.
		{
			cout << "You are already enroll this course." << endl;
			return false; //return 0
		}
	};
	student.setCourse_count(student.getCourse_count() + 1); //Student's course counts + 1
	student.setEnrolled_course(student.getEnrolled_courses() + course_name); //Added course's name student's enrolled list.
	enrolled_students++; //enrolled students for course +1
	return true;
};
//Student rate the course
void OnlineCourse::rateCourse() {
	cout << "Enter your rating for this course between 1 and 5:";
	cin >> enter_rate;
	if (enter_rate <=5 && enter_rate >=1) //Student's rate should be between 1-5 
	{
		total_rate += enter_rate; //Student's rate add the total rates.
		rate_count++; //Number of rate +1.
		course_rates = total_rate / rate_count; //Course rate is total rate / number of rate count
		cout << "Rating Successful! Average rating of Course: " << course_rates << endl;
	}
	else
	{
		cout << "\nInvalid Rating Returning Main Menu.\n" << endl;
	}


};
