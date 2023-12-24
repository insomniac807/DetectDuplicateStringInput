/*
	Simple program to detect all duplicates from user input string(s)

	Bjarne Stroustrup - Programming_ Principles and Practice Using C++-Addison-Wesley Professional (2014)
*/

#include "../../std_lib_facilities.h" // still using modified/simplified version of std_lib

// create a function to output duplicate words from a user input string and number of occurences

/*
	Testing Co-Pilot here. Output not correct or functionality not working as hoped.
	Needs manual improvement. Duplicate only detected for 2 occurences. 3rd occurence treated as new word.
	also, instead of number of occurences, program outputs the position of the duplicate word in the input string
*/
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

