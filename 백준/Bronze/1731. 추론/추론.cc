#include <iostream>
using namespace std;

int main() {
	bool R; int N, In, Arr[50], Next; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	if (Arr[1] - Arr[0] == Arr[2] - Arr[1]) {
		R = 1; Next = Arr[1] - Arr[0];
	}
	else {
		R = 0; Next = Arr[1] / Arr[0];
	}
	cout << ((R) ? Arr[N - 1] + Next : Arr[N - 1] * Next);
	return 0;
}