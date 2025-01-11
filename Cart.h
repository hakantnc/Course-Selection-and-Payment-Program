//Hakan Tunc
#pragma once
#include "Student.h"
#include "OnlineCourse.h"
#include <iostream>
using namespace std;
class Cart
{
private:
	OnlineCourse* courses[3];
	int cartSize = 0;
	int cartnum=0;
	int ccv=0;
	string cartname;


public:
	Cart(); //Default Constructor
	~Cart(); //Destructor
	//We use "get" functions because we should achieve private members we will return they.
	int getCartnum(); //return  credit cart number
	int getCCV(); // return ccv of cart
	string getCartName(); //return name on the cart.
	//We use "set" functions because we should return a controlled value with the "get" function.
	void setCartnum(int);
	void setCCV(int);
	void setCartName(string);

	void addCart(OnlineCourse* course_name,Student& student); //We use this function to add the course to the cart.
	void removeCart(); //We use this function to remove the course to the cart.
	void viewCart(); //We use this function to view Cart details.
	void confirmCart(Student& student); //We use this function to confirm and payment system. 
};

