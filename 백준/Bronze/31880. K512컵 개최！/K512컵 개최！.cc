#include <iostream>
using namespace std;

int main() {
	long long N, M, In, Sum = 0; cin >> N >> M;
	while (N--) { cin >> In; Sum += In; }
	while (M--) {
		cin >> In;
		if (In == 0) { continue; }
		Sum *= In;
	}
	cout << Sum;
	return 0;
}