// Hackerrank-PickingNumbers.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"   // must stand on first position!!! precompiled header
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int pickingNumbers(vector <int> a) {
	const int len = 1000;
	sort(a.begin(), a.end());
	int pairs[len][2];
	int counter = 0;
	int vecLength = 0; int tempLength = 0;
	int firstCount = 0;
	int secCount = 0;

	// store all pairs of neighbors
	for (int i = 0; i < (a.size() - 1);++i) {
		if ((a[i + 1] - a[i])<=1) {
			pairs[counter][0] = a[i];
			pairs[counter][1] = a[i + 1];
			++counter;
		}
	}

	for (int i = 0; i < counter; ++i) {
		firstCount = count(a.begin(), a.end(), pairs[i][0]);
		secCount = count(a.begin(), a.end(), pairs[i][1]);
		if (pairs[i][0] != pairs[i][1]) {
			tempLength = firstCount + secCount;
		} else {
			tempLength = firstCount;
		}
		if (tempLength > vecLength) {
			vecLength = tempLength;
		}
	}

	return vecLength;
}



/*

int pickingNumbers(vector <int> a) {
sort(a.begin(), a.end());
vector<int> myVector;
vector<int> tempVec;
int temp = 0;
bool doubleCountSwitch = false;
for (int i = 0; i < (a.size() - 1);++i) {
temp = a[i + 1] - a[i];
if (temp <= 1) {
if (doubleCountSwitch == false) {
tempVec.push_back(a[i]);
// set to true if we have first element
}
doubleCountSwitch = true;
tempVec.push_back(a[i + 1]);
}
else {
if (tempVec.size() > myVector.size()) {
myVector = tempVec;
}
tempVec.clear();
doubleCountSwitch = false; // to again use first entry
}
}
// if end of vec is also legit
if (tempVec.size() > myVector.size()) {
myVector = tempVec;
}

return myVector.size();
}
*/


int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	int result = pickingNumbers(a);
	cout << result << endl;
	cin >> n;
	return 0;
}