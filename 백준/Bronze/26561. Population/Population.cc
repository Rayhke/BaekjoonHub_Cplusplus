#include <iostream>
using namespace std;

int main() {
	int N, P, T; cin >> N;
	while (N--) {
		cin >> P >> T;
		P += T / 4; P -= T / 7;
		cout << P << '\n';
	}
	return 0;
}