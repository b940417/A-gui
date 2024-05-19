#include <iostream>
#include <string>

using namespace std;

string replaceFourLetterWords(string input);

int main() {
	string input;
	char choice;

	do {
		cout << "Enter a line of text: ";
		getline(cin, input);

		string result = replaceFourLetterWords(input);
		cout << "Output: " << result << endl;

		cout << "\nDo you want to continue? (y/n): ";
		cin >> choice;
		cin.ignore();                                        // Clear input buffer
	} while (choice == 'y' || choice == 'Y');

	system("pause");
	return 0;
}

string replaceFourLetterWords(string input) {
	string output = "";
	string word = "";
	bool capitalize = false;

	for (char c : input) {
		if (isalpha(c))                  // If character is a letter, add it to the current word
			word += c;
		else {                           // If not, process the current word
			if (word.length() == 4)
				if (isupper(word[0]))    // Check if the word starts with a capital letter
					output += "Love";
				else
					output += "love";
			else
				output += word;
			output += c;                 // Add the non-letter character
			word = "";                   // Reset the current word
		}
	}

	return output;
}