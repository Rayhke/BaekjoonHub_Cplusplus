#include <iostream>
#include <queue>
using namespace std;

priority_queue <int> pq;

int main() {
	int N, M, L, P = 0; cin >> N >> M;
	for (int n = 1; n < N; n++) { cin >> L; pq.push(L); }
	if (!pq.empty()) {
		while (M <= pq.top()) {
			L = pq.top(); pq.pop();
			M++; L--; P++; pq.push(L);
		}
	}
	cout << P;
	return 0;
}