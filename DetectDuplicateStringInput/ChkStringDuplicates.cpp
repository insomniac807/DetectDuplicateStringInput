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

// create a function to output duplicate words from a user input string and number of occurences
void detectDuplicateWords()
{
	// init variables
	string previous = " "; // previous word; initialized to "not a word"
	string current; // current word
	int number_of_words = 0; // number of words seen so far

	// prompt user
	cout << "Start typing.....\n";

	/*
			Program will continue to run until
					user enters the terminate key combo (i.e. ctrl+c)
						*/
	while (cin >> current)
	{
		++number_of_words; // increment number of words seen so far

		// check if current word is same as previous word
		if (previous == current)
		{
			cout << "Word number " << number_of_words
				<< " repeated: " << current << "\n";
		}
		previous = current;
	}
}

int main()
{
	detectDuplicateWords();
}

