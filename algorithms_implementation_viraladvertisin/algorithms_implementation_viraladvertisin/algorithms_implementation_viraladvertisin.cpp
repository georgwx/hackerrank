// algorithms_implementation_viraladvertisin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int viralAdvertising(int n) {
	int initialNumber = 5;
	//if (n == 1)
		//return(2);
	int totalLikes = 0;
	int tempLikes = 0;
	for (int counter = 1; counter == n; ++counter) {
		tempLikes = initialNumber / 2;
		totalLikes += tempLikes;
		tempLikes *= 3;
		initialNumber = tempLikes;
	}
	return(totalLikes);
}

int main() {
	int n;
	cin >> n;
	int result = viralAdvertising(n);
	cout << result << endl;
	return 0;
}
