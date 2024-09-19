//**Branches 1 and 2 were written on a separate work computer and emailed back to myself to input into VS2022
//on my computer at home which explains a lack of history on github, since we're not allowed to install
//VS or run code on work computers.

//CH2 Programming Project CSC221 63H
//Austin Mollard
//Instructor Andrew Sprague
#include <iostream>
#include <cmath>
using namespace std;
//Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
//The number of millimeters higher than the current level that the ocean’s level will be in 5yr
//The number of millimeters higher than the current level that the ocean’s level will be in 7yr
//The number of millimeters higher than the current level that the ocean’s level will be in 10yr
int main()
{
	double oceanRise;
	oceanRise = 1.5;
	cout << "At a rate of 1.5mm per year, the ocean's sea level will rise " << oceanRise * 5 << "mm in five years, " << endl;
	cout << oceanRise * 7 << "mm in seven years, and " << endl;
	cout << oceanRise * 10 << "mm in ten years.";
	return 0;
}