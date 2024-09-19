//**Branches 1 and 2 were written on a separate work computer and emailed back to myself to input into VS2022
//on my computer at home which explains a lack of history on github, since we're not allowed to install
//VS or run code on work computers.

//CH2 Programming Project CSC221 63H
//Austin Mollard
//Instructor Andrew Sprague
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//PART 1
	//Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
	//The number of millimeters higher than the current level that the ocean’s level will be in 5yr
	//The number of millimeters higher than the current level that the ocean’s level will be in 7yr
	//The number of millimeters higher than the current level that the ocean’s level will be in 10yr

	double oceanRise;
	oceanRise = 1.5;
	cout << "***THIS IS PART 1!***" << endl;
	cout << "At a rate of 1.5mm per year, the ocean's sea level will rise: " << endl << oceanRise * 5 << "mm in five years, " << endl;
	cout << oceanRise * 7 << "mm in seven years, " << endl;
	cout << oceanRise * 10 << "mm in ten years." << endl;

			//PART 2
			//A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9
			//miles per gallon when driven on the highway. Write a program that calculates and displays the
			//distance the car can travel on one tank of gas when driven in town and when driven on the
			//highway.
			//Hint: The following formula can be used to calculate the distance:
			//Distance = Number of Gallons x Average Miles per Gallon
			double numbGal, avgMiGalTown, avgMiGalHigh;

			numbGal = 20;
			avgMiGalTown = 23.5;
			avgMiGalHigh = 28.9;

			cout << endl;
			cout << "***THIS IS PART 2!***" << endl;
			cout << "Distance driven at 23.5mpg in the city, on one tank of gas: " << numbGal * avgMiGalTown << endl;
			cout << "Distance driven at 28.9mpg on the highway, on one tank of gas: " << numbGal * avgMiGalHigh << endl;

				//PART 3


				//A soft drink company recently surveyed 16,500 of its customers and found that approximately
				//15 percent of those surveyed purchase one or more energy drinks per week. Of those
				//customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored
				//energy drinks. Write a program that displays the following:
				//The approximate number of customers in the survey purchasing one or more energy drinks per week.
				//The approximate number of customers in the survey preferring citrus-flavored energy drinks

				int totalCustomer;
				totalCustomer = 16500;

				cout << endl;
				cout << "***THIS IS PART 3!***" << endl;
				cout << totalCustomer * 0.15 << " customers purchase one or more energy drinks a week." << endl;
				cout << totalCustomer * 0.58 << " customers prefer the citrus-flavored energy drinks." << endl;

	return 0;
}