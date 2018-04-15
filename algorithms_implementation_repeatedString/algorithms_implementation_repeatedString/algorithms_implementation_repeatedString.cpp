// algorithms_implementation_repeatedString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

long long repeatedString(string s, long long n) {
	long long numberA = 0; // number 'a' in first substring
	long long numberB = 0; // number 'b' in first substring
	long long len = n % s.size();  // length substring
	long long int divi = (n)/(s.size()); // word we have to consider
	numberA = count(s.begin(), s.end(), 'a') * divi;
	numberB = count(s.begin(), s.begin() + len, 'a');
	return(numberA + numberB);
}

int main() {
	string s;
	cin >> s;
	long long n;
	cin >> n;
	long long result = repeatedString(s, n);
	cout << result << endl;
	cin >> n;
	return 0;
}
