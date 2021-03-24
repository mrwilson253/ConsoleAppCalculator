/*
* Jordan wilson
* jwilson160@cnm.edu
* WilsonP2 - Simple Calculator
* Driver.cpp
*/
#include <iostream>
#include <string>
#include "SimpleCalc.h"
using namespace std;

void WriteHeader();

int main()
{
	WriteHeader();

	char oper = '+';
	double op1 = 0.0, op2 = 1.0;
	char answer = 'y';

	SimpleCalc calc;

	do
	{
		//ask the user for their choice of operation
		cout << "What operation would you like to perform?(+,-,/,*): ";
		cin >> oper;
		//ask them for op1 and op2
		cout << "Please enter the first number: ";
		cin >> op1;
		cout << "Please enter the second number: ";
		cin >> op2;
		//use our object to SetOperation
		calc.SetOperation(oper, op1, op2);

		cout << calc.GetResults() << endl;

		//ask the user if they want to continue? y/n
		cout << "\nWould you like to perform another calculation?(y/n): ";
		cin >> answer;

	} while (answer == 'y');

	//Say goodbye
	cout << "Good-bye!";
	return 0;
}

void WriteHeader()
{
	cout << "Jordan Wilson\njwilson160@cnm.edu\nSimple Calculator\n";
}