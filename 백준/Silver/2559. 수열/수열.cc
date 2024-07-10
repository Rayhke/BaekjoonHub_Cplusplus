#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, K, Arr[100000], Count = 0, Max; cin >> N >> K;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	for (int n = 0; n < K; n++) { Count += Arr[n]; }
	Max = Count;
	for (int n = K; n < N; n++) {
		Count += (Arr[n] - Arr[n - K]);
		Max = max(Count, Max);
	}
	cout << Max;
	return 0;
}