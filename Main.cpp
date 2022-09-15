/*
* main.cpp
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in c++
* Syracuse University
* HW #3 - Exercise 5.16 pg# 206
* 8/21/22
* ********************** Prgram description  ***********************
* This program reads five number between 1 and 30 for each number that's read the
* program will display the same numbe of adjacent asterisks for each number
*/

#include <iostream>
#include "BarChart.h"

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::setw;


int main()
{
	BarChart chart; //creating the object of the barchart class
	size_t value;
	int rows; // initializing the rows of the bar chart.
	cout << "\t\t\t****  BarChart ****\n";
	cout << "\t\t\t Enter valus from 1 to 30 : \n";
	for (size_t i = 0; i < chart.getSize(); i++) // asking the user to input value
	{
		cout << "\t\t\t row[" << i+1 << "]: ";
		cin >> value;
		chart.setRowValue(i, value);
		
	}
	cout << endl;
	cout << "\t\t\tGraph is been printed .. \n";

	for (size_t i = 0; i < chart.getSize(); i++)
	{
		cout << "\t\t\t";
		for (int j = 0; j < chart.getRowValue(i); j++)
		{
			
			cout << "*"; // prints the bar chart with asterisks 
		}
		cout<< endl;
	}
	
}