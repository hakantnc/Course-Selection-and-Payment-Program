//Hakan Tunc
#include "Cart.h"
#include <string>
Cart::Cart() : cartSize(0){ //We give cartSize(0) because no courses in the cart when you start.
	for (int i = 0; i < 3; i++) {courses[i] = nullptr;}; //We give nullptr because array is empty. 
	cout << "Default Constructor - Cart" << endl;
};
Cart::~Cart() {
	cout << "Destructor - Cart" << endl;   //When we press Exit print Destructor.
};
//Access private members with accessor and mutator methods.
void Cart::setCartnum(int _cartnum) { cartnum = _cartnum; };
int Cart::getCartnum() { return cartnum; };

void Cart::setCCV(int _ccv) { ccv = _ccv; };
int Cart::getCCV() { return ccv; };

void Cart::setCartName(string _cartname) { cartname = _cartname; };
string Cart::getCartName() { return cartname; };

void Cart::addCart(OnlineCourse* course_name, Student& student) //We use pointer for course_name because we access OnlineCourse's parameters dynamically.
{
	for (int i = 0; i < cartSize; i++)
	{
		if (courses[i]->getCourseName() == course_name->getCourseName()) //if in array course name equal course name.
		{
			cout << "\nThis course is already in the cart.\n" << endl;
			return;
		}
	};
	if (student.getEnrolled_courses().find(course_name->getCourseName()) != string::npos)  //.find() function search to getCourseName if find in getEnrolledStudent() print cout message
		//if in enrolled student any course an this course equal the course name.
	{
		for (int i = 0; i < student.getCourse_count(); i++)
		{
			cout << "\nYou are already enrolled this course. " << course_name->getCourseName() << ". " << "\n" << endl;
			return;
		}
	}
	if (cartSize >= 3) //If user wan't add more than 3 courses.
	{
		cout << "\nYou can't more than 3 courses." << "\n" << endl;
		return;
	}

	courses[cartSize] = course_name; //save the course in array.
	cartSize++; //in array +1.
	cout << "\n" << course_name->getCourseName() << " added to your cart. " << "\n" << endl;
};
void Cart::removeCart() 
{
	while(true) //We give "while" because we don't want exit the remove course page after remove only 1 course.
	{
	if (cartSize > 0) //If cart is not empty.
	{
		for (int i = 0; i < cartSize; i++) //We can see courses on the list type.
		{
			cout << i + 1 << ". " << courses[i]->getCourseName() << endl;
		}
		
		cout << "\nSelect the course for remove: \n";
		int remove_select;
		cin >> remove_select;
		if (remove_select <=0 && remove_select > cartSize) //If remove select bigger than number of courses in the cart or less than zero.
		{
			cout << "\nInvalid selection.\n" << endl;
			return;
		}
		else
		{
			for (int i = 0; i < cartSize; i++)
			{
				cout << "\n*************" << endl;
				cout << "Removed " << courses[i]->getCourseName() << endl;
				cout << "*************\n" << endl;
				courses[i] = courses[i + 1]; //Ýf the first element in the list is removed, it moves the second element to the first row.
				cartSize--; //-1 course in the cart.
			}
			return;
		}
	}
	else
	{
		cout << "\nCart is empty, Please add courses in cart.\n" << endl;
		return;
	}
	}
};
void Cart::confirmCart(Student& student) 
{
	if (cartSize==0) //If cart is empty.
	{
		cout << "\nCart is empty, Please add courses in cart.\n"<< endl;
		return;
	}
	else
	{

		for (int i = 0; i < cartSize; i++)// In all array's elements save the student's information and use that addStudent function features.
		{
			courses[i]->addStudent(student);
		};
		cartSize = 0; //Reset cart.


		cout << "\nEnter your credit cart number: (Enter without space)" << endl;
		cin >> cartnum;
		cout << "\nEnter your CCV number. (CCV Code located on the back of credit cart.)" << endl;
		cin >> ccv;
		cout << "\nEnter the name on the card." << endl;
		cin >> cartname;

		cout << "\nYour cart succesfully confirmed.\n"<< endl;
	}

};


