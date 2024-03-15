#include <iostream>
#include <algorithm>
using namespace std;

int N, M, L = 0, Count = 0, Arr[100000];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	sort(Arr, Arr + N);
	int R = N - 1;
	for (int L = 0; L < N; L++) {
		if (L >= R) { break; }
		if (Arr[L] + Arr[R] < M) { continue; }
		R--; Count++;
	}
	cout << Count;
	return 0;
}