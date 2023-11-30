#include <iostream>
#include <map>
#include <queue>
#define PAIR pair<int, string>
using namespace std;

int L = 0;
map <string, int> W;
multimap <string, string> M;
queue <string> q;
priority_queue <PAIR, vector<PAIR>, greater<PAIR>> pq;

void V() {
	while (!pq.empty()) {
		int N = pq.top().first; string S = pq.top().second; pq.pop(); q.push(S); L++;
		auto U = M.equal_range(S);
		for (auto P = U.first; P != U.second; P++) {
			if (--W[P->second] == 0) { pq.push({ N + 1,P->second }); }
		}
	}
	if (W.size() == L) {
		while (!q.empty()) { cout << q.front() << '\n'; q.pop(); }
	}
	else { cout << -1; }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; string S, P; cin >> N;
	while (N--) {
		cin >> S >> P; W[P]++; M.insert({ S,P });
		if (!W.count(S)) { W[S] = 0; }
	}
	for (const auto& n : W) {
		if (W[n.first] == 0) { W[n.first] = -1; pq.push({ 0,n.first }); }
	}
	V();
	return 0;
}