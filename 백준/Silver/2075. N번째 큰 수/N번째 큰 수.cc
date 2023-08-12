#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	priority_queue <int, vector<int>, greater<int>> pq;
	int N, M; cin >> N;
	for (int n = 0; n < N * N; n++) {
		cin >> M;
		if (pq.size() >= N) { if (M > pq.top()) { pq.pop(); pq.push(M); } }
		else { pq.push(M); }
	}
	cout << pq.top();
	return 0;
}