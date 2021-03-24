/*
* Jordan wilson
* jwilson160@cnm.edu
* WilsonP2 - Simple Calculator
* SimpleCalc.cpp
*/

#include "SimpleCalc.h"

SimpleCalc::SimpleCalc()
{}

void SimpleCalc::Calculate()
{
	switch(operation)
	{
	case '+':
		answer = operand1 + operand2;
		desc = "Addition";
		break;
	case '-':
		answer = operand1 - operand2;
		desc = "Subtraction";
		break;
	case '*':
		answer = operand1 * operand2;
		desc = "Multiplication";
		break;
	case '/':
		if (operand2 == 0.0)
		{
			desc = "\nIllegal Operation!";
		}
		else
		{
			//do the math,
			answer = operand1 / operand2;
			//set a different description
			desc = "Division";
		}
		break;
	default:
		desc = "That is not a recognized operation.";

	}

}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
	operation = oper;
	operand1 = op1;
	operand2 = op2;
	Calculate();
}

string SimpleCalc::GetResults()
{
	//Create a string with the information
	string r = to_string(answer);
	string one = to_string(operand1);
	string two = to_string(operand2);
	string results = "Your chosen operation was " + desc + "\n" + one + " " + operation + " " + two + " = " + r;
	return results;
}
