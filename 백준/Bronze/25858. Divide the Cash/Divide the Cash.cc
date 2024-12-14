#include <iostream>
using namespace std;

int N, D, Arr[30], Sum = 0;

int main() {
	cin >> N >> D;
	for (int n = 0; n < N; n++) {
		cin >> Arr[n]; Sum += Arr[n];
	}
	D /= Sum;
	for (int n = 0; n < N; n++) {
		cout << Arr[n] * D << '\n';
	}
	return 0;
}