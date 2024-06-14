#include <iostream>
using namespace std;

int main() {
	int Input[9], Sum = 0;
	for (int n = 0; n < 9; n++) { cin >> Input[n]; }
	for (int n = 0; n < 9; n++) {
		if (Input[n] > 100 * ((n / 2) + 1)) { cout << "hacker"; return 0; }
		Sum += Input[n];
	}
	(Sum < 100) ? cout << "none" : cout << "draw";
	return 0;
}