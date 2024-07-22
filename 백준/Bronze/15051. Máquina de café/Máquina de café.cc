#include <iostream>
using namespace std;

int main() {
	int Arr[3], Result = 1e9, Count;
	for (int n = 0; n < 3; n++) { cin >> Arr[n]; }
	for (int n = 0; n < 3; n++) {
		Count = 0;
		for (int m = 0; m < 3; m++) {
			if (n != m) { Count += abs(n - m) * Arr[m] * 2; }
		}
		Result = min(Count, Result);
	}
	cout << Result;
	return 0;
}