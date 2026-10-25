// CountVowels.cpp - Anna Myers - 22 October 2026
// Description: Counts characters in string literals.

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int countCharacter(string);

int main(void) {
	// define string 
	string str;

	// User input
	cout << "Please enter string: ";
	getline(cin, str);

	// Call the function and display the result
	cout << countCharacter(str) << endl;

	return 0;
}

// Returns the number of characters in str (spaces and punctation count)
int countCharacter(string str) {
	// Define variable and identify length
	int length = str.length();

	return length;
}