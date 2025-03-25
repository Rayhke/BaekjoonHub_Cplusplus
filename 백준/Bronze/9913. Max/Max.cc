#include <iostream>
using namespace std;

int Use[1001];

int main() {
	int N, In, Index = 0, Max = 0; cin >> N;
	while (N--) {
		cin >> In; Use[In]++;
	}
	for (int n = 1; n < 1001; n++) {
		if (Max < Use[n]) {
			Max = Use[n]; Index = n;
		}
	}
	cout << Use[Index];
	return 0;
}