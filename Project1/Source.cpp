//**Branches 1 and 2 were written on a separate work computer and emailed back to myself to input into VS2022
//on my computer at home which explains a lack of history on github, since we're not allowed to install
//VS or run code on work computers.

//CH2 Programming Project CSC221 63H
//Austin Mollard
//Instructor Andrew Sprague
#include <iostream>
#include <cmath>
using namespace std;
//A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9
//miles per gallon when driven on the highway. Write a program that calculates and displays the
//distance the car can travel on one tank of gas when driven in town and when driven on the
//highway.
//Hint: The following formula can be used to calculate the distance:
//Distance = Number of Gallons x Average Miles per Gallon

int main()
{
	double numbGal, avgMiGalTown, avgMiGalHigh;

	numbGal = 20;
	avgMiGalTown = 23.5;
	avgMiGalHigh = 28.9;

	cout << "Distance driven at 23.5mpg in the city, on one tank of gas: " << numbGal * avgMiGalTown << endl;
	cout << "Distance driven at 28.9mpg on the highway, on one tank of gas: " << numbGal * avgMiGalHigh << endl;

	return 0;
}