#include <iostream>
using namespace std;

int main() {
	int N, K; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> K;
		for (int m = 0; m < K; m++) { cout << "="; }
		cout << '\n';
	}
	return 0;
}