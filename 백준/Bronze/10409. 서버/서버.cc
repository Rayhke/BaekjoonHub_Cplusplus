#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N, T, arr[51]; cin >> N >> T;
	for (int n = 0; n < N; n++) { cin >> arr[n]; }
	for (int n = 0; n < N; n++) {
		T -= arr[n];
		if (T < 0) { cout << n; R = 0; break; }
	}
	if (R) { cout << N; }
	return 0;
}