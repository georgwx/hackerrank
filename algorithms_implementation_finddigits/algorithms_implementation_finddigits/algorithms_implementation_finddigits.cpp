// algorithms_implementation_finddigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int findDigits(int n) {
	int counter = 0;
	string number = to_string(n);
	for (int i = 0; i < number.size();++i) {
		char digit = number[i];
		int dig = (int)digit - '0';
		if (dig == 0)
			continue;
		if ((n % dig == 0)) {
			++counter;
		}
	}
	return(counter);
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		int result = findDigits(n);
		cout << result << endl;
		cin >> n;
	}
	return 0;
}