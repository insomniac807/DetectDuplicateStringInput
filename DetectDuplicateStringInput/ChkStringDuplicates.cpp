/*
	Simple program to detect all duplicates from user input string(s)

	N.B. 
	1) Program IS case sensitive

	2) Program will detect match 
	EITHER
	after carrige return from previous line
	OR
	from white space delimited string
	e.g The inputs
	"hello\n"
	"hello\n"
	will detect duplicate inputs (1 match). But so will the input
	"well well well" (2 matches)
	This is due to how cin handles input which will be explained in more detail in later chapters of the book

	Bjarne Stroustrup - Programming_ Principles and Practice Using C++-Addison-Wesley Professional (2014)
*/

#include "../../std_lib_facilities.h" // still using modified/simplified version of std_lib

int main()
{
	/*
		init variable current with whitespace as this will be treated as new line character 
		meaning if statement will not break on first run
	*/
	string next; 
	string current = " ";

	cout << "Start typing.....\n"; // prompt user

	/*
		Program will continue to run until
		user enters the terminate key combo (i.e. ctrl+c)
	*/
	while (cin >> next)
	{
		if (current == next)
		{
			cout << "Duplicate Detected: " << current << ":" << next << "\n";
		}
		current = next;
	}
	return 0;
}