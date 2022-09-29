//**********************************************************************
// File:				main.cpp
// Author:			
// Date:				10/5/21
// Class:				CS150-XX
// Assignment:	Files
// Purpose:			Formats and prints out a list of numbers read from a 
//							text file, then calculates the amount of numbers in the 
//							file, the sum of all the numbers in the file, and if the 
//							numbers in the file are sorted from lowest to highest.
// Hours:
//**********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main () {
	const string INPUT_FILE = "numbers.txt";
	const int SENTINEL = -999;

	ifstream inputFile;
	inputFile.open (INPUT_FILE);

	if (inputFile.fail ()) {
		cout << "Error opening input file." << endl;
		exit (EXIT_FAILURE);
	}

	inputFile.close ();
	return EXIT_SUCCESS;
}