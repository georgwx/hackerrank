// algorithms_implementation_minimum_distanc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumDistances(vector <int> a) {
	vector < vector <int>> mat(10001); // need to create number of rows
	int minVal = 10000;
	int position = 0;
	// put index number into a bin (vector)
	for (int iter = 0; iter < a.size();++iter) {
		int val = a[iter];
		mat[val].push_back(position);
		++position;
	}
	// going over the rows (i.e. digits)
	for (int iter = 0; iter < 10001;++iter) {
		//only if row is non-empty
		if (mat[iter].empty()) {
			int temp = 10000;
			for (int counter = 0; counter < mat[iter].size(); ++counter) {
				int z = mat[iter,counter + 1] - mat[iter,counter]; // calc distance of indices
				if (z < temp) {
					temp = z;
				}
				if (temp < minVal) 
					minVal = temp;
			}
		}
	}
	if (minVal == 10000)
		return(-1);
	return(minVal);
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	int result = minimumDistances(a);
	cout << result << endl;
	cin >> n;
	return 0;
}

