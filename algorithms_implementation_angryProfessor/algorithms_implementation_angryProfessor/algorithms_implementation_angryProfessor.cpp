// algorithms_implementation_angryProfessor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string angryProfessor(int k, vector <int> a) {
	int counter = 0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] <= 0) {
			++counter;
		}
	}
	if (counter >= k) {
		return("NO");
	}
	else {
		return("YES");
	}


}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int k;
		cin >> n >> k;
		vector<int> a(n);
		for (int a_i = 0; a_i < n; a_i++) {
			cin >> a[a_i];
		}
		string result = angryProfessor(k, a);
		cout << result << endl;
	}
	cin >> t;
	return 0;
}