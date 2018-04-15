// algorithms_implementation_hurdlerace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

int hurdleRace(int k, vector <int> height) {
	int counter = 0;
	for (int i = 0; i < height.size();++i) {
		if (height[i] > k) {
			counter = counter + height[i] - k;
			k = height[i];

		}
	}
	return(counter);
}

int main() {
	int n;
	int k;
	cin >> n >> k;
	vector<int> height(n);
	for (int height_i = 0; height_i < n; height_i++) {
		cin >> height[height_i];
	}
	int result = hurdleRace(k, height);
	cout << result << endl;
	cin >> n;
	return 0;
}
