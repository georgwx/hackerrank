// algorithms_implementation_beautifuldaysat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int beautifulDays(int i, int j, int k) {
	string number;
	int revNumber = 0;
	int numberBeautiful = 0;
	for (int counter = i; counter <= j;++counter) {
		string number = to_string(counter);
		reverse(number.begin(),number.end());
		revNumber = stoi(number);
		if ((counter - revNumber) % k == 0) {
			++numberBeautiful;
		}


	}
	return(numberBeautiful);
}

int main() {
	int i;
	int j;
	int k;
	cin >> i >> j >> k;
	int result = beautifulDays(i, j, k);
	cout << result << endl;
	cin >> i;
	return 0;
}
