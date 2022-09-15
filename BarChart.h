/*
* barChart.h
*
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in c++
* Syracuse University
* HW #3 - Exercise 5.16 pg# 206
* 8/21/22
*
*  ********************** Prgram description  ***********************
* This program reads five number between 1 and 30 for each number that's read the
* program will display the same numbe of adjacen asterisks
*/
#ifndef BarChart_h
#define BarChart_h


#include <iostream>
#include <array>
#include <iomanip>
#include <cstdlib>  // this contains efficient functions for dynamic memory allocation, 
using std::array;

class BarChart {
public:
	void setRowValue(size_t row, size_t value); // sets value for each row of bar chart array
	int getRowValue(size_t row); // returns the value at the row index specified
	int getSize();// returns the maximum number of the rows in the array.


private:
	static constexpr size_t maxRows = 5; // sets the default value for the maxrow
	array<size_t, maxRows> bars;

};








#endif // !BarChart_h


