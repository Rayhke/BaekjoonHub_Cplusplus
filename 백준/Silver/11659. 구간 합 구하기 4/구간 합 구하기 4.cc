#include <iostream>
using namespace std;

inline long long s(long long p[], int n) { return (p[n] + p[n - 1]); }
inline long long r(long long p[], int N, int L) {
	if (L != 1 && N != 1) { return (p[L - 1] - p[N - 2]); }
	return p[L - 1];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, L; cin >> N >> M;
	long long* p = new long long [N] {};
	cin >> p[0];
	for (int n = 1; n < N; n++) { cin >> p[n]; p[n] = s(p, n); }
	for (int n = 0; n < M; n++) {
		cin >> N >> L;
		cout << r(p, N, L) << '\n';
	}
	delete[]p;
	return 0;
}