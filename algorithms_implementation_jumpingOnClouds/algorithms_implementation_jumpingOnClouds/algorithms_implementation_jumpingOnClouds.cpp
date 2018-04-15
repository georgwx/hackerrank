// algorithms_implementation_jumpingOnClouds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
	int jumps=0;
	int lengthZeros = 0;
	for (int counter = 0; counter < c.size();++counter) {
		if (c[counter] == 0) {
			++lengthZeros;
			// for no thundercloud at the end
			if (counter == (c.size()-1)) {
				double z = (lengthZeros -1) / 2.f;
				jumps += ceil(z);
			}
		}
		else {
			double z = (lengthZeros+1) / 2.f;
			jumps += round(z);
			lengthZeros = 0;
		}
	}
	return(jumps);
}

int main() {
	int n;
	cin >> n;
	vector<int> c(n);
	for (int c_i = 0; c_i < n; c_i++) {
		cin >> c[c_i];
	}
	int result = jumpingOnClouds(c);
	cout << result << endl;
	cin >> n;
	return 0;
}