/*
* barChart.cpp
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in c++
* Syracuse University
* HW #3 - Exercise 5.16 pg# 206
* 8/21/22
*  ********************** Prgram description  ***********************
* This program reads five number between 1 and 30 for each number that's read the
* program will display the same numbe of adjacen asterisks
*/

#include "BarChart.h"
using std::cout;

void BarChart::setRowValue(size_t rowIndex, size_t value) {
	if (rowIndex > maxRows) // it checks if the row index is greater 
	{
		cout << "\n the index is out of bound\n";
	}
	else
	{
		if (value > 30)
		{
			bars[rowIndex] = 30;// if the value is greater than 30 than it is setting the value in to 30
		}
		else if (value < 0) // checks if the value is less than 0 than it is setting the value in to 0
		{
			bars[rowIndex] = 0;
		}
		else
		{
			bars[rowIndex] = value;
		}
	}
}
int BarChart::getRowValue(size_t rowIndex)
{
	return bars[rowIndex];
}
int BarChart::getSize()
{
	return maxRows;
}