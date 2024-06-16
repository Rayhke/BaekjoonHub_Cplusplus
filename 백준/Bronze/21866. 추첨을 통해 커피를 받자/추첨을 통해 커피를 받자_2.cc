#include <iostream>
using namespace std;

int main() {
	int Input[9], Sum = 0, Num = 0;
	for (int n = 0; n < 9; n++) { cin >> Input[n]; }
	for (int n = 0; n < 9; n++) {
		if (!(n & 1)) { Num++; }
		if (Input[n] > 100 * Num) { cout << "hacker"; return 0; }
		Sum += Input[n];
	}
	(Sum < 100) ? cout << "none" : cout << "draw";
	return 0;
}
