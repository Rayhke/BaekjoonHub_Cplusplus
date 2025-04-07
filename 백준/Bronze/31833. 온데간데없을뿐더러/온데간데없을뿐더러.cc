#include <iostream>
using namespace std;

int N, In;
long long X, Y;

void Logic(long long& Sum) {
	for (int n = 0; n < N; n++) {
		cin >> In;
		Sum *= In > 9 ? 100 : 10;
		Sum += In;
	}
}

int main() {
	cin >> N;
	Logic(X); Logic(Y);
	cout << min(X, Y);
	return 0;
}