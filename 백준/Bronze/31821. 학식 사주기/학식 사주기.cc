#include <iostream>
using namespace std;

int main() {
	int N, M, Arr[10], Sum = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	cin >> M;
	while (M--) { cin >> N; Sum += Arr[N - 1]; }
	cout << Sum;
	return 0;
}