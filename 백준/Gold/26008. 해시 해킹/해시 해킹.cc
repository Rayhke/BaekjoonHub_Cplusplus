#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long long N, M, A, H, P = 1, U = 1e9 + 7;
	cin >> N >> M >> A >> H; N--;
	while (N--) { P = (P * M) % U; }
	cout << P;
	return 0;
}