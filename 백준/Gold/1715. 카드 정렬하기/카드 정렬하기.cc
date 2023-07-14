#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector<int>, greater<int>> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, P, Q, R = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> P; pq.push(P); }
	if (N > 1) {
		while (pq.size() > 1) {
			P = pq.top(); pq.pop();
			Q = pq.top(); pq.pop();
			R += P + Q; pq.push(P + Q);
		}
		cout << R;
	}
	else { cout << 0; }
	return 0;
}