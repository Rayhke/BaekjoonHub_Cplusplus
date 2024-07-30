#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, Arr[1000], Count, Max;
	while (1) {
		cin >> N; Count = 0;
		if (N == 0) { break; }
		for (int n = 0; n < N; n++) { cin >> Arr[n]; }
		Count += (Arr[0] + Arr[1] + Arr[2]); Max = Count;
		for (int n = 3; n < N; n++) {
			Count += (Arr[n] - Arr[n - 3]);
			Max = max(Count, Max);
		}
		cout << Max << '\n';
	}
	return 0;
}