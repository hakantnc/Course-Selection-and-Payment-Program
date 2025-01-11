//Hakan Tunc
#include <iostream>
#include "OnlineCourse.h" //Access OnlineCourse
#include "SoftwareCourses.h" //Access SoftwareCourses
#include "LanguageCourses.h" //Access LanguageCourses
#include "ProfessionalDevelopmentCourses.h" //Access ProfessionalDevelopmentCourses
#include "FitnessCourses.h" //Access FitnessCourses
#include "Student.h" //Access Student
#include "Cart.h" //Access Cart
using namespace std;
template <typename T> //Template function for discount rate
T discountRate(T price, T discount_rate) {return price * (1 - discount_rate); };
void Cart::viewCart() { //We write here this function because we should discountRate function on Source.cpp
	double total_price = 0.0; //Total Price 0 for starting
	if (cartSize == 0) //If cart is empty
	{
		cout << "\nCart is empty. Please add courses in cart.\n"<< endl;
		return;
	}

	else
	{
		for (int i = 0; i < cartSize; i++)
		{
			double discountedPrice = discountRate(courses[i]->getPrice(), courses[i]->getDiscountRate()); //Discounted Price calculated

			total_price += discountedPrice; //Sum of discounted prices of courses
			cout << "\n*************" << endl;
			cout << "Course: " << courses[i]->getCourseName() << endl;
			cout << "Original Price: " << courses[i]->getPrice() << endl;
			cout << "Discounted Price: " << discountedPrice << endl;
			cout << "\n*************" << endl;
		}
		cout << "\n*************" << endl;
		cout << "Discounted Total Price: " << total_price;
		cout << "\n*************\n" << endl;
	};
};
int main() {
	int menu_choice;
	int enroll_select;
	int rate_course;
	int cart_select;
	Cart cart;
	Student student1;
	LanguageCourses languagecourse;
	SoftwareCourses softwarecourse;
	ProfessionalDevelopmentCourses devcourse;
	FitnessCourses fitnesscourse;
	while (true) //We use "while" because we don't want close if user's dont want.
	{
		cout << "|*|*|*|*|*|*|*|*|*|*|" << endl;
		cout << "1. Courses Details." << endl;
		cout << "2. Enroll the Courses." << endl;
		cout << "3. Rate Courses." << endl;
		cout << "4. View Course Cart." << endl;
		cout << "5. View Enrolled Courses" << endl;
		cout << "6. Exit." << endl;
		cout << "|*|*|*|*|*|*|*|*|*|*|" << endl;
		cout << "\nPlease Select an Option.(1-5) ";
		cin >> menu_choice;
		if (menu_choice <=6 && menu_choice >= 1)
		{
			switch (menu_choice)
			{
			case 1:
				//Display Courses Details
				cout << "|*|*|*|*|*| Displaying Courses |*|*|*|*|*|" << endl;
				softwarecourse.displayInfo();
				languagecourse.displayInfo();
				devcourse.displayInfo();
				fitnesscourse.displayInfo();
				break;
			case 2:
				//User select which course will enroll
				cout << "\nAttention! Please review the course details before registering.\n" << endl;
				cout << "|*|*|*|*|*| Select the course you will enroll in. |*|*|*|*|*|*|" << endl;
				cout << "1. Software Course" << endl;
				cout << "2. Language Course" << endl;
				cout << "3. Professional Development Course" << endl;
				cout << "4. Fitness Course" << endl;

				cout << "\nPlease Select an Option.(1-4) ";
				cin >> enroll_select;
				if (enroll_select <= 4 && enroll_select >= 1) //We have 4 course so user should select between 1-4.
				{
					switch (enroll_select) 
					{
					case 1:
						cout << "Enter your information" << endl; //User enter information and add course to cart.
						cin >> student1;
						cart.addCart(&softwarecourse, student1);
					
						break;
					case 2:
						cout << "Enter your information" << endl; //User enter information and add course to cart.
						cin >> student1;
						cart.addCart(&languagecourse, student1);
						break;
					case 3:
						cout << "Enter your information" << endl; //User enter information and add course to cart.
						cin >> student1;
						cart.addCart(&devcourse, student1);
						break;
					case 4:
						cout << "Enter your information" << endl; //User enter information and add course to cart.
						cin >> student1;
						cart.addCart(&fitnesscourse, student1);
						break;
					default:
						break;
					}
				}
				else
				{
					//If user don't enter between 1-4 
					cout << "\n*** Invalid selection, please select an option between 1 - 4. ***\n" << endl;

					cout << "\nAttention! Please review the course details before registering.\n" << endl;
					cout << "|*|*|*|*|*| Select the course you will enroll in. |*|*|*|*|*|*|" << endl;
					cout << "1. Software Course" << endl;
					cout << "2. Language Course" << endl;
					cout << "3. Professional Development Course" << endl;
					cout << "4. Fitness Course" << endl;

					cout << "\nPlease Select an Option.(1-4) ";
					cin >> enroll_select;
					if (enroll_select <= 4 && enroll_select >= 1)
					{
						switch (enroll_select)
						{
						case 1:
							cout << "Enter your information" << endl; //User enter information and add course to cart.
							cin >> student1;
							cart.addCart(&softwarecourse, student1);

							break;
						case 2:
							cout << "Enter your information" << endl; //User enter information and add course to cart.
							cin >> student1;
							cart.addCart(&languagecourse, student1);
							break;
						case 3:
							cout << "Enter your information" << endl; //User enter information and add course to cart.
							cin >> student1;
							cart.addCart(&devcourse, student1);
							break;
						case 4:
							cout << "Enter your information" << endl; //User enter information and add course to cart.
							cin >> student1;
							cart.addCart(&fitnesscourse, student1);

							break;
						default:
							break;
						}
					}
				
				}
				break;
			case 3: //User rate course here
				cout << "|*|*|*|*|*|*| Select the course you want to rate. |*|*|*|*|*|*|" << endl;
				cout << "1. Software Course" << endl;
				cout << "2. Language Course" << endl;
				cout << "3. Professional Development Course" << endl;
				cout << "4. Fitness Course" << endl;

				cout << "\nPlease Select an Option.(1-4) ";   //We have 4 course so user should select between 1-4.
				cin >> rate_course;
				if (rate_course <= 4 && rate_course >= 1) 
				{
					switch (rate_course)
					{
					case 1:
						softwarecourse.rateCourse();
						break;
					case 2:
						languagecourse.rateCourse();
						break;
					case 3:
						devcourse.rateCourse();
						break;
					case 4:
						fitnesscourse.rateCourse();
						break;
					default:
						break;
					}
				}
				else
				{
					//If user don't enter between 1-4 
					cout << "\n*** Invalid selection, please select an option between 1 - 4. ***\n" << endl;
					cout << "|*|*|*|*|*|*| Select the course you want to rate. |*|*|*|*|*|*|" << endl;
					cout << "1. Software Course" << endl;
					cout << "2. Language Course" << endl;
					cout << "3. Professional Development Course" << endl;
					cout << "4. Fitness Course" << endl;

					cout << "\nPlease Select an Option.(1-4) ";  //We have 4 course so user should select between 1-4.
					cin >> rate_course;
					if (rate_course <= 4 && rate_course >= 1)
					{
						switch (rate_course)
						{
						case 1:
							softwarecourse.rateCourse();
							break;
						case 2:
							languagecourse.rateCourse();
							break;
						case 3:
							devcourse.rateCourse();
							break;
						case 4:
							fitnesscourse.rateCourse();
							break;
						default:
							break;
						}
					}
					else
					{
						cout << "\n*** Invalid selection, please select an option between 1 - 4 ***\n" << endl;
					}
				}
				break;
			case 4:
					//View Cart Details here.
				cart.viewCart();
			
					cout << "\n********************" << endl;
					cout << "1. Remove Course in the Cart." << endl;
					cout << "2. Confirm and Pay to cart." << endl;
					cout << "********************\n" << endl;
					cout << "Please Select an Option.(1-2) ";
					cin >> cart_select;
					if (cart_select >=1 && cart_select <=2)
					{
						switch (cart_select)
						{
						case 1:
							cart.removeCart();
							break;
						case 2:
							cart.confirmCart(student1);
							break;
						default:
							break;
						}

					}
					else
					{
					cout << "\n*** Invalid selection, please select an option between 1 - 2 ***\n" << endl;
					cout << "\n********************" << endl;
					cout << "1. Remove Course in the Cart." << endl;
					cout << "2. Confirm to cart." << endl;
					cout << "********************\n" << endl;
					cout << "Please Select an Option.(1-2) ";
					cin >> cart_select;
					switch (cart_select)
					{
					case 1:
						cart.removeCart();
						break;
					case 2:
						cart.confirmCart(student1);
						break;
					default:
						break;
					}
					}
				

				break;

			case 5:
				//User can show their enrolled courses.
				student1.viewEnrolledCourse(student1);


				break;

			case 6:
				cout << "\nGOOD BYE!\n" << endl;
				return 0;
				break;
			default:
				break;
			}



		}
		else
		{
			cout << "\n*** Invalid selection, please select an option between 1 - 5. ***\n" << endl;
		}
	}
	return 0;
}