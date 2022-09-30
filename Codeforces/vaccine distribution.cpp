// CPP program to find minimum flips required
// to make all 1s in left and 0s in right.
#include <bits/stdc++.h>
using namespace std;

int minimalFilps(string bits){
	int n = bits.length();
	int flipsFromLeft[n];
	int flipsFromRight[n];
	int flips = 0;
	for (int i = 0; i < n; i++) {
		if (bits[i] == '0')
			flips++;		
		flipsFromLeft[i] = flips;
	}
	flips = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (bits[i] == '1')
			flips++;		
		flipsFromRight[i] = flips;
	}
	int minFlips = INT_MAX;
	for (int i = 1; i < n; i++) {
		if (flipsFromLeft[i - 1] + flipsFromRight[i] < minFlips)
			minFlips = flipsFromLeft[i - 1] + flipsFromRight[i];
	}
	return minFlips;
}
int main()
{
	string bits = "00001";
	cout << minimalFilps(bits) << endl;
	return 0;
}
