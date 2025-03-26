// CalculatorCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Simple calculator program. Only takes in two digits for the four options.
#include <iostream>
using namespace std;

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}

int main()
{
	double x = 0, y = 0;
	int choice = 0;
	cout << "What would you like to do? Choose between 1-4\n 1: Add\n 2: Subtract\n 3: Multiply\n 4: Divide\n";
	cin >> choice;
	do {
		switch (choice) {
		case 1:
			cout << "Give two numbers to add\n";
			cin >> x >> y;
			cout << add(x, y) << endl;
			break;
		case 2:
			cout << "Give two numbers to subtract\n";
			cin >> x >> y;
			cout << subtract(x, y) << endl;
			break;
		case 3:
			cout << "Give two numbers to multiply\n";
			cin >> x >> y;
			cout << multiply(x, y) << endl;
			break;
		case 4:
			cout << "Give two numbers to divide\n";
			cin >> x >> y;
			cout << divide(x, y) << endl;
			break;
		default:
			break;
		}
		cout << "If you want to continue, press 0. Otherwise, choose one of the previous options.\n";
		cin >> choice;
	} while (choice != 0);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
