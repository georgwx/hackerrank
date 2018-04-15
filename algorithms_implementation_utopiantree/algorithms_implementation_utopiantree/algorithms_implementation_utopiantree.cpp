// algorithms_implementation_utopiantree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int utopianTree(int n) {
	int counter = 1;
	int height = 1;
	while (counter <= n) {
		if (counter % 2 == 1) {
			height *= 2;
		}
		else {
			height += 1;
		}
		++counter;
	}
	return height;
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		int result = utopianTree(n);
		cout << result << endl;
	}
	cin >> t;
	return 0;
}
