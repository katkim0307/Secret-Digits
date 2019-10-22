// kk4036_hw8_q6.cpp : Program execution begins and ends in the 'main'
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


#include "pch.h"
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


/*JAIME's OFFICE HOUR
string input = "john17 17 i3";
string output = "john17 xx i3";
// Where are the spaces and how many spaces are there 
// since that will tell you how many words there are in the sentence
// spaces = [6, 9]
// for (i = 0; i < sentenceLength - 1; i++) {
//	
//}
//[0, 6), [7, 9), [10, len(str))d

void JAIME_findSpaces(int arr[], int s) {
	for (i = 0; i < len(s); i++) {
		if s[i] == ' ' :
		arr.append(i)
			def allDigits(s, start_idx, end_idx) :
			// logic to check if all digits
	// int arr[1024]: okay to use this to hold indices of spaces
	// arr[j++] = i
}

int MY_findSpaces(string sentence) {
	//string returnSentence;
	int i, count, j, n = sentence.length();

	//bool possibleInt = true;
	for (int i = 0; i < n; i++) {
		count = 0;
		if (sentence.at(i) == ' ') {
			i = arr[j];
			j++;
			count++;
		}
	}
		//j = index # for space location index
		return j;
}

//different approach
string hideDigs(string sentence) {
	string tempSentence;
	int n = sentence.length();

	bool possibleDig = true;
	for (int i = 0; i < n; i++) {
		if (isDigit(sentence.at(i)) && possibleDig)
			tempSentence += 'x';
		else {
			tempSentence += sentence[i];
			possibleDig = false;
		}
		if (sentence[i] == ' ')
			possibleDig = true;
	}
	return tempSentence;
}

//separate by words using upper cases in a sentence function
void separateByWords(string sentence) {
	int i;//Loop variable
	bool isUpper;

	//Inputting string
	cout << "Enter sentence:";
	cin >> sentence;
	
	isUpper = false;
	for (i = 0; i < sentence.length(); i++) {
		if (isUpper(sentence.at(i)))//Checks for upper case character
		{
			sentence.insert(i, " "); //Inserting space

				sentence.at(i + 1) = tolower(sentence.at(i + 1)); //Converting to lower case
		}
	}
	cout << sentence << 
}

//initial thought process
string changeNumToX(string sentence) {
	int length, i;
	//bool numOnly;

	//getting the input sentence
	cout << "Please enter a line of text: " << endl;
	getline(cin, sentence);
	cout << endl;

	//finding th elength of the sentence
	length = sentence.length();

	//evaluating each char from the sentence

	for (i = 0; i < length; i++) {
		if (sentence[i] >= '0' && sentence[i] <= '9') {
			sentence.at(i) = 'x';
		}
	}
	return sentence;
}
*/