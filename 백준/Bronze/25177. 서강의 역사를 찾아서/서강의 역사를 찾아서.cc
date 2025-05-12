#include <iostream>
using namespace std;

int Arr1[1000], Arr2[1000];

int main() {
	int N, M, Max = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> Arr1[n]; }
	for (int m = 0; m < M; m++) { cin >> Arr2[m]; }
	for (int m = 0; m < M; m++) {
		Max = max(Arr2[m] - Arr1[m], Max);
	}
	cout << Max;
	return 0;
}