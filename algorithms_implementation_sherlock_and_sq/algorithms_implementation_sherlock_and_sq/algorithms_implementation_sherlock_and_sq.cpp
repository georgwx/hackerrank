// algorithms_implementation_sherlock_and_sq.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int squares(int a, int b) {
	int lowNumber = ceil(sqrt(a));
	int highNumber = floor(sqrt(b));
	if (highNumber - lowNumber < 0) {
		return(0);
	}
	else {
		return(highNumber - lowNumber + 1);
	}
}

int main() {
	int q;
	cin >> q;
	for (int a0 = 0; a0 < q; a0++) {
		int a;
		int b;
		cin >> a >> b;
		int result = squares(a, b);
		cout << result << endl;
	}
	cin >> q;
	return 0;
}