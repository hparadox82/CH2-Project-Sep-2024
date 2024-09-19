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
			//PART 3
			
			//A soft drink company recently surveyed 16,500 of its customers and found that approximately
			//15 percent of those surveyed purchase one or more energy drinks per week. Of those
			//customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored
			//energy drinks. Write a program that displays the following:
			//The approximate number of customers in the survey purchasing one or more energy drinks per week.
			//The approximate number of customers in the survey preferring citrus-flavored energy drinks

			int totalCustomer;
			totalCustomer = 16500;

			cout << totalCustomer * 0.15 << " customers purchase one or more energy drinks a week." << endl;
			cout << totalCustomer * 0.58 << " customers prefer the citrus-flavored energy drinks.";

			return 0;

}
