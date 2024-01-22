#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int N, M, L = 1;
	while (1) {
		cin >> N;
		if (N == 0) { break; }
		while (N--) { cin >> M; }
		printf("Case %d: Sorting... done!\n", L++);
	}
	return 0;
}