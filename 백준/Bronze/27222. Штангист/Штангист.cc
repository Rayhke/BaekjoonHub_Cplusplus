#include <iostream>
using namespace std;

bool Use[1000];

int main() {
	int N, X, Y, Sum = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Use[n]; }
	for (int n = 0; n < N; n++) {
		cin >> X >> Y;
		if (!Use[n]) { continue; }
		Sum += max(Y - X, 0);
	}
	cout << Sum;
	return 0;
}