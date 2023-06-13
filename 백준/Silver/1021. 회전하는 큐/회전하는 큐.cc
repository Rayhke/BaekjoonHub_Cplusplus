#include <iostream>
#include <deque>
using namespace std;

deque <int> dq;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c = 0, d = 0, e = 0, N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) { dq.push_back(n + 1); }
	for (int n = 0; n < M; n++) {
		cin >> a; b = dq.size();
		for (int m = 0; m < b; m++) {		// 앞으로 돌린 경우의 수
			if (dq.front() == a) { c = m; }
			dq.push_back(dq.front());
			dq.pop_front();
		}
		for (int m = 0; m < b; m++) {		// 뒤로 돌린 경우의 수
			if (dq.front() == a) { d = m; }
			dq.push_front(dq.back());
			dq.pop_back();
		}
		if (c == 0 && d == 0) { dq.pop_front(); }	// 만약, [c] 와 [d] 의 값이 0 인 경우의 에러 방지
		else if (c < d) {				// 추후에 구체적인 원인 분석 바람
			for (int m = 0; m < c; m++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			dq.pop_front();
			e += c;
		}
		else {
			for (int m = 0; m < d; m++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			dq.pop_front();
			e += d;
		}
	}
	cout << e;
	return 0;
}
