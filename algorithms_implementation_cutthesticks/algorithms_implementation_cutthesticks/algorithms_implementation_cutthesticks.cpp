// algorithms_implementation_cutthesticks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


vector <int> cutTheSticks(vector <int> arr) {
	sort(arr.begin(),arr.end());
	vector <int> currentSize;
	currentSize.push_back(arr.size());
	while (arr.size() > 0) {
		int minEl = arr[0];
		for (int i = 0; i < arr.size();++i) {
			arr[i] = arr[i] - minEl;
		}
		int iter = 0;
		while (arr[iter] == 0) {
			arr.erase(arr.begin());
			if (arr.size() == 0) 
				break;
		}
		currentSize.push_back(arr.size());
	}
	// return last zero
	currentSize.pop_back();
	return(currentSize);
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	vector <int> result = cutTheSticks(arr);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
	cout << endl;
	cin >> n;

	return 0;
}
