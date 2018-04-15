// algorithms_implementation_bigInteger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int extraLongFactorials(int n) {
	if (n == 1) {
		return(1);
	}
	else {
		return(n * extraLongFactorials(n - 1));
	}
}

int main() {
	int n;
	int gg = 0;
	cin >> n;
	gg = extraLongFactorials(n);
	cout << gg;
	cin >> n;
	return 0;
}

