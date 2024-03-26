#include <iostream>
#define LL long long
using namespace std;

long long N, M, A, H, P = 1, U = 1e9 + 7;

void Backtracking(LL count, LL sum) {
	if (count == N) { P += sum % M % U; return; }
	for (int a = 0; a <= A; a++) {
		Backtracking(count + 1, (sum + a) % U);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M >> A >> H; N--;
	Backtracking(0, 0);
	cout << P;
	return 0;
}
