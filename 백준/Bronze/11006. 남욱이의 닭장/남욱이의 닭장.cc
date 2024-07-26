#include <iostream>
using namespace std;

int main() {
	int T, N, M, Result; cin >> T;
	while (T--) {
		cin >> N >> M; Result = (M << 1) - N;
		printf("%d %d\n", Result, M - Result);
	}
	return 0;
}