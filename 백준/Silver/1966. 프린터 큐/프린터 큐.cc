#include <iostream>
#include <queue>
using namespace std;

queue <int> q;
queue <int> r;
queue <int> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[9] = {}, b, c = 0, d = 1, T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M; d = 1;
		for (int n = 0; n < N; n++) {
			cin >> b; q.push(b); r.push(n); a[b - 1]++;
			if (M == n) { c = n; }
		}
		for (int n = 8; n > -1; n--) {
			while (a[n] > 0) {
				while (q.front() != n + 1) {
					q.push(q.front()); r.push(r.front());
					q.pop(); r.pop();
				}
				if (r.front() == c) { v.push(d); }
				q.pop(); r.pop(); a[n]--; d++;
			}
		}
		for (int n = 0; n < 9; n++) { a[n] = 0; }
		while (!q.empty()) { q.pop(); r.pop(); }
	}
	while (!v.empty()) { cout << v.front() << '\n'; v.pop(); }
	return 0;
}