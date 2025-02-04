// Beginning topic 4 - selection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

#include"Windows.h"

using std::cout, std::string, std::getline; 

void demoSomeQuizQuestions()
{
	//cout << sizeof(float) << " in units of BYTES\n";

//cout << sizeof(double) << " in units of BYTES\n";
// 
// 
//cout << pow(2, 10) << "\n";


//cout << sqrt("sixty four");
// 
// 
	string dog = "perro";

	string cat = "gato";

	//cout << std::length(dog)
		//int return
}

int main()
{
	//demoSomeQuizQuestions(); //we will talk later about defining our own functions and calling them ...

	cout << "Enter your password: \n";
	string correct_password; 

	//std::cin >> correct_password; //ONE way of reading in a password that CONTAINS NO SPACES
	getline(std::cin, correct_password);

	//echo the password back for confirmation: 
	cout << "You entered the following password: " << correct_password << "\n";

	//******
	Sleep(1'000); //std::this_thread::sleep_for()
	system("cls"); 

	cout << "...password saved - continuing program execution\n";

	string guessedPassword; 
	cout << "Welcome back - enter your password to log back in:\n";
	getline(std::cin, guessedPassword);


	if (guessedPassword == correct_password)
	{
		cout << "Log in was SUCCESSFUL - hooray!\n";
	}

	//if (guessedPassword != correct_password) //! does not indicate excitement
	//{
	//	cout << "You entered the WRONG password :( \n";
	//	//numAttempts++; //we'll handle locking out of account later ...
	//}

	else //means that guessPassword != correct_password
	{
		cout << "You entered the WRONG password :( \n";
	}




}

