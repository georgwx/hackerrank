// algorithms_implementation_equalizearrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int equalizeArray(vector <int> arr) {
	int maximumCount = 1;
	int currentCount = 1;
	for (int i = 0;i < arr.size();++i) {
		currentCount = count(arr.begin() + i, arr.end(), arr[i]); // don't consider numbers already looked at
		if (currentCount > maximumCount)
			maximumCount = currentCount;
	}

	return(arr.size() - maximumCount);
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	int result = equalizeArray(arr);
	cout << result << endl;
	return 0;
}