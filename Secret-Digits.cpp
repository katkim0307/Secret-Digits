// Write a program that reads in a line of text (sentence) 
// and outputs the line with all the digits in all numbers replaced with 'x'.
// e.g. My NYU Net ID is kk4036 and my 4 digit pin is 1234 which is a secret.
//      My NYU Net ID is kk4036 and my x digit pin is xxxx which is a secret.
// if the digit(s) is/are alone, then you change it to 'x'
// if the digit(s) is/are with letters, kk4036, you don't change them to 'x'
// *if the word is composed of digits only, you convert them to 'x'
// *if the word is composed of various types of characters, leave them alone
// separate words using " " -> locate the spaces and count them 
// gives you the wordCount = spaceCount + 2


#include <iostream>
#include <string>
using namespace std;

bool isDigit(char a);
string digToX(string str, char a);

int main()
{
	string sentence;
	//bool numOnly;

	//getting the input sentence
	cout << "Please enter a line of text: " << endl;
	getline(cin, sentence);
	int n = sentence.length();
	cout << endl;

	for (int i = 0; i < n; i++) {
		string word = "";
		bool isMixedWord = false;

		while (sentence[i] != ' ' && i < n) {
			word += sentence[i];
			if (!isDigit(sentence[i]))
				isMixedWord = true;
			i++;
		}

		if (isMixedWord)
			cout << word;
		else
			cout << digToX(word, 'x');

		if (sentence[i] == ' ')
			cout << " ";
	}
	cout << endl;
	return 0;
}

bool isDigit(char a) {
	if (a >= '0' && a <= '9')
		return true;
	else
		return false;
}

string digToX(string str, char a) {
	string editedStr = "";
	int n = str.length();
	
	for (int i = 0; i < n; i++) {
		editedStr += a;
	}
	return editedStr;
}
