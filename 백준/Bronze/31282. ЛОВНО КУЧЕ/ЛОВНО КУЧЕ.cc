#include <iostream>
using namespace std;

int main() {
	int N, M, K, Count = 1; cin >> N >> M >> K;
	while (N + M * Count > K * Count) { Count++; }
	cout << Count;
	return 0;
}