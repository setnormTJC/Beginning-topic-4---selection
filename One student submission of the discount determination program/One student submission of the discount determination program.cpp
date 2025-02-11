#include <iostream>
#include <iomanip>

using namespace std;

float price1;
float price2;
float totalCost;

int main() {
	cout << "What is the price of the first item?:\n"; 
	cin >> price1; // Asks and saves price1
	cout << "What is the price of the second item?:\n"; 
	cin >> price2; // Asks and saves price2

	totalCost = price1 + price2;
	if (totalCost < 200) {
		totalCost += 9.99;
	}
	//else if (200 < totalCost < 500) //don't!
	else if (totalCost < 500 && totalCost >= 200) {
		// completely unnecessary
	}
	else {
		totalCost -= totalCost * .1;
	}
	cout << "total cost = $" << fixed << setprecision(2) << totalCost << "\n"; // prints the total cost with 2 decimal places
}