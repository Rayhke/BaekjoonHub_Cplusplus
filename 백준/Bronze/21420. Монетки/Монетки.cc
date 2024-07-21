#include <iostream>
using namespace std;

int main() {
	bool In; int N, Count = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> In; Count += In;
	}
	cout << min(Count, N - Count);
	return 0;
}