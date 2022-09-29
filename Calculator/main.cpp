//**********************************************************************
// File:				main.cpp
// Author:			
// Date:				10/5/21
// Class:				CS150-XX
// Assignment:	A Simple Calculator
// Purpose:			A calculator that can add, subtract, multiply, and 
//							divide. The program also does simple error checking
//							making sure the user enters a valid selection.
// Hours:
//**********************************************************************

#include <iostream>

using namespace std;

int main () {
	const char ADD_SELECTION = '+',
		SUBTRACT_SELECTION = '-',
		MULTIPLY_SELECTION = '*',
		DIVIDE_SELECTION = '/',
		QUIT_SELECTION_LOWER = 'q',
		QUIT_SELECTION_UPPER = 'Q';

	char selection;

	cout << "*** Simple Calculator ***" << endl << endl;

	cout << "Select Operator (+, -, *, /, Q): ";
	cin >> selection;

	return EXIT_SUCCESS;
}