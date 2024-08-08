#include <iostream>
using namespace std;

int Score[3], N, In, Sum, Max = 0;

int main() {
	cin.tie(NULL);
	for (int n = 0; n < 3; n++) { cin >> Score[n]; }
	cin >> N;
	while (N--) {
		Sum = 0;
		for (int n = 0; n < 3; n++) {
			for (int m = 0; m < 3; m++) {
				cin >> In;
				Sum += In * Score[m];
			}
		}
		Max = max(Sum, Max);
	}
	cout << Max;
	return 0;
}