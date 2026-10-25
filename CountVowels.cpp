// CountVowels.cpp - Anna Myers - 22 October 2026
// Description: Counts the vowels in a string entered by the user
// Part a+b of countCharacters which changed to countVowels

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int countVowel(string str);

int main(void) {
	// Define string 
	string str;

	// User input
	cout << "Please enter string: ";
	getline(cin, str);

	// Call the function and display the result
	cout << countVowel(str) << endl;

	return 0;
}

// Returns the number of characters in str (spaces and punctation count)
int countVowel(string str) {
	// Define variable and identify length
	int count = 0;

	// Look at each character in string
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];

		// if the character is a vowel, add 1
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		{
			count++;
		}
	}
	return count;
}