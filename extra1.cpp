//Student Name: Larry Oviatt 
//WSUID: P548M44
//File Name: extra1.cpp
//Assignment Number: Extra Credit #1
//Description: draw triangle, diamond, and X using only three specific cout statements for each
//Last Changed: October 21, 2018

#include <iostream>
#include <cstdlib> // library that includes absolute value function

using namespace std;

int main ()

{
	for (int row = 4; row >= 1; --row) // decreasing loop for 4 rows needed for triangle
	{
		for (int space = 0; space < 4 - row; ++space) // used to increase number of spaces printed starting with 0
		cout << " ";

		for (int pound = 0; pound <= 2 * row - 1; ++pound) // used to decrease number of pounds printed starting with 8
		{
			cout << "#";
		}
		cout << endl; // ends each row, must be outside of loop printing contents of each row
	}
	cout << "\n\n"; // used to print 2 blank lines

	for (int row = -3; row <= 3; ++row) // increasing loop for 7 rows, -3 to 3
	{
		for (int column = -3; column <= 3; ++column) // increasing loop for 7 columns, -3 to 3
		{
			// prints first pound when row = -3 and column = 0
			// prints second pound when row = -2 and column = -1
			// prints third pound when row = -2 and column = 1, etc.
			if (abs(row) + abs(column) == 3) 
				cout << "#";
			else
				cout << " "; // prints a space when if statement is false
		}
		cout << endl; // ends each row, must be outside of loop printing contents of each row
	}
	cout << "\n\n"; // used to print 2 blank lines

	for (int row = -3; row <= 3; ++row) // increasing loop for 7 rows, -3 to 3
	{
		for (int column = -3; column <= 3; ++column) // increasing loop for 7 columns, -3 to 3
		{
			// prints first pound when row = -3 and column = -3
			// prints second pound when row = -3 and column = 3
			// prints third pound when row = -2 and column = -2, etc
			if (abs(row) - abs(column) == 0)
				cout << "#";
			else
				cout << " "; // prints a space when if statement is false
		}
		cout << endl; // ends each row, must be outside of loop printing contents of each row
	}

	return 0;
}

