// algorithm_implementation_append_and_delet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

string appendAndDelete(string s, string t, int k) {
	int z = 0; // total moves
	if (s.size() + t.size() <= k) // if we can erase string s and reconstruct t from empty string
		return("Yes");
	
	string v;
	v.assign(t);

	while (v.size() < s.size()) {
		v.append("1");
	}


	// get minimum number of actions
	int remove = 0; 
	int minLen = s.size();
	for (int iter = minLen-1; iter > -1 ; --iter) {
		if (s[iter] != v[iter]) {
			remove = minLen-iter;
		}
	}
	z += remove;
	z += t.size() - (s.size() - remove);
	
	if (z == k)
		return("Yes");
	if (z > k)
		return("No");
	if ((k - z) % 2 == 0)
		return("Yes");
	return("No");
}

int main() {
	string s;
	cin >> s;
	string t;
	cin >> t;
	int k;
	cin >> k;
	string result = appendAndDelete(s, t, k);
	cout << result << endl;
	cin >> k;
	return 0;
}