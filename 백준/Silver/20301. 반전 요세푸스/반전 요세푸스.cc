#include <iostream>
#include <deque>
using namespace std;

deque <int> dq;

inline int s(int a, int M) { return a % M; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, b = 0, N, K, M; cin >> N >> K >> M;
	for (int n = 0; n < N; n++) { dq.push_back(n + 1); }
	for (int n = 0; n < N; n++, a++) {
		if (!s(a, M)) { b++; }
		if (b & 1) {
			for (int m = 0; m < K - 1; m++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int m = 0; m < K; m++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
		cout << dq.front() << '\n';
		dq.pop_front();
	}
	return 0;
}