#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	deque <int> dq;
	int N, M, L; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M == 1) { cin >> L; dq.push_front(L); }
		if (M == 2) { cin >> L; dq.push_back(L); }
		if (M == 3) {
			if (!dq.empty()) { cout << dq.front() << '\n'; dq.pop_front(); }
			else { cout << -1 << '\n'; }
		}
		if (M == 4) {
			if (!dq.empty()) { cout << dq.back() << '\n'; dq.pop_back(); }
			else { cout << -1 << '\n'; }
		}
		if (M == 5) { cout << dq.size() << '\n'; }
		if (M == 6) { cout << dq.empty() << '\n'; }
		if (M == 7) {
			if (!dq.empty()) { cout << dq.front() << '\n'; }
			else { cout << -1 << '\n'; }
		}
		if (M == 8) {
			if (!dq.empty()) { cout << dq.back() << '\n'; }
			else { cout << -1 << '\n'; }
		}
	}
	return 0;
}