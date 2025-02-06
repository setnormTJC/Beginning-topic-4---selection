// Some code review on Feb 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

using std::cout; 

void demoLightSwitchBoolean()
{
	bool lightIsOn = false;
	//demo "toggling" a flag: 

	lightIsOn = !lightIsOn; //exclamation mark means NEGATE ( 5 * -1  = -5)

	std::cout << std::boolalpha; //displays a boolean in its alphabetic representation

	std::cout << "Is the light ON? " << lightIsOn << "\n";


	if (lightIsOn)/*; *///don't get "semicolon happy"!
	{
		cout << "Light is indeed ON\n";
		cout << "Yes, yes it is on\n";
	}

	else
	{
		cout << "Light is NOT on (OFF)\n";
	}
}

void demoElseIf()
{
	while (true)
	{
		cout << "The photos that you can display are the following:\n";
		cout << "1 - Ramona (the kitty)\n";
		cout << "2 - POUT \n";
		cout << "3 - Vicious/virtuous cycle\n";

		std::string response;
		getline(std::cin, response);

		if (response == "1")
		{
			cout << "Displaying lovely kitty:\n";
			system("ramona.jpg");
		}

		//elif  //this is a Python thing if I recall correctly ....
		else if (response == "2")
		{
			cout << "Displaying petulance\n";
			system("pout!.jpg");
		}

		else if (response == "3")
		{
			cout << "Displaying magnificent art\n";
			system("cycle.jpg");
		}
		// system("ramona.jpg");

		else //catch-all
		{
			cout << "You entered something other than 1, 2, or 3 ...\n";
			return; //"early return" 
		}
	}
}

void demoSwitch()
{
	cout << "Enter R, G, or B (for red, green, or blue)\n"; 

	char chosenColor; 
	std::cin >> chosenColor; 


	switch (chosenColor)
	{
	case 'R': 
		cout << "You chose RED\n";
		break; //Kit-Kat bar

	case 'G': 
		cout << "You chose GREEN\n";
		break; 

	case 'B': 
		cout << "Blue was chosen\n";
		break; 

	default: //this is similar to the final ELSE of an else if chain 
		cout << "Unsupported color or option chosen\n";
		break; 


		
	}
}

int main()
{
	demoSwitch(); 

	//demoElseIf(); //function call
}

