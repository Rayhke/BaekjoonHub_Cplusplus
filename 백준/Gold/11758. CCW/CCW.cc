#include <iostream>
#include <vector>
#define PAIR pair<int, int>
using namespace std;

PAIR P1, P2, P3;

int CCW() {
	int M = P1.first * P2.second + P2.first * P3.second + P3.first * P1.second;
	M -= P1.first * P3.second + P2.first * P1.second + P3.first * P2.second;
	if (M > 0) { return 1; }
	else if (M < 0) { return -1; }
	return 0;
}


int main() {
	cin >> P1.first >> P1.second >> P2.first >> P2.second >> P3.first >> P3.second;
	cout << CCW();
	return 0;
}