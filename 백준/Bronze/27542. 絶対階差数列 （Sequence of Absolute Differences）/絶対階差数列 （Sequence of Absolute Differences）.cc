#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, Arr[2000]; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	while (--N) {
		for (int n = 0; n < N; n++) {
			Arr[n] = abs(Arr[n] - Arr[n + 1]);
		}
	}
	cout << Arr[0];
	return 0;
}