// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::string; 
using std::cin; 

void demoBooleanDataType()
{
	//another data type! 

	//boolean variables can only have TWO values - TRUE or FALSE

	bool areYouTiredYet = true;

	areYouTiredYet = false;

	if (areYouTiredYet/* == true*/)
	{
		cout << "Let's go home\n";
		cout << "And DANCE the night away!\n";
	}

	else //if (!areYouTiredYet)
	{
		cout << "Continue learning this good stuff\n";
	}
}

void demoTheConditionalOperator()
{
	int age;
	cout << "Enter your age: ";
	std::cin >> age;

	std::string eligibility = (age >= 18) ? "You are eligible to vote!" : "You are not eligible to vote yet.";
	cout << eligibility << "\n";
}

int main()
{
	//demoBooleanDataType(); 
	//demoTheConditionalOperator(); 


	string username; 
	cout << "Enter your name: \n";// << endl;


	cin.ignore(6);

	cin >> username;

	cout << username << "\n";


}

