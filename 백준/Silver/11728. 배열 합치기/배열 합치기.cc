#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, N, M; cin >> N >> M;
	for (int n = 0; n < N + M; n++) {
		cin >> a; pq.push(a);
	}
	while (!pq.empty()) { cout << pq.top() << ' '; pq.pop(); }
	return 0;
}