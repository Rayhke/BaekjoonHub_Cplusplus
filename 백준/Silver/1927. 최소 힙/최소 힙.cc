#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, N; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> a;
		if (a > 0) { pq.push(a); }
		else if (a == 0) {
			if (!pq.empty()) { cout << pq.top() << '\n'; pq.pop(); }
			else { cout << 0 << '\n'; }
		}
	}
	return 0;
}
