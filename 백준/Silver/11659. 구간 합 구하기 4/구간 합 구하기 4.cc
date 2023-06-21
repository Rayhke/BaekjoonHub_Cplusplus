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
/* ■ 설명 ■
때로는 미리 조건대로 연산한 값을 담아두고,
조건에 따라 표현하는 방법을 바꾸면 결과는 크게 차이가 난다.
*/
