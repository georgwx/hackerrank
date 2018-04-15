// algorithms_implementation_designerpdf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int designerPdfViewer(vector <int> h, string word) {
	int maximum = 0;
	int pos = 0;
	int number = 0;
	vector<char> alphabet = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (int counter = 0; counter < word.length(); ++counter) {
		char letter = word[counter];
		pos = distance(alphabet.begin(), find(alphabet.begin(), alphabet.end(), letter)); // get positon of char in vector
		number = h[pos];
		if (number > maximum) {
			maximum = number;
		}
	}
	return (maximum * word.length());
}

int main() {
	vector<int> h(26);
	for (int h_i = 0; h_i < 26; h_i++) {
		cin >> h[h_i];
	}
	string word;
	cin >> word;
	int result = designerPdfViewer(h, word);
	cout << result << endl;
	return 0;
}