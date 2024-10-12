#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, In, Sum = 0, Count = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		cin >> In;
		Sum += In; Sum = max(Sum, 0);
		if (Sum < M) { continue; }
		Count++;
	}
	cout << Count;
	return 0;
}