// implementation_algorithms_saveThePrisoner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

long saveThePrisoner(long n, long m, long s) {
	long remainder = m + s - 2; // there is no prisoner 0!!!!!!!!!!!!!!!!!!!!!!!!!!
	return((remainder %n) + 1);  
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		long n;
		long m;
		long s;
		cin >> n >> m >> s;
		long result = saveThePrisoner(n, m, s);
		cout << result << endl;
	}
	cin >> t;
	return 0;
}
