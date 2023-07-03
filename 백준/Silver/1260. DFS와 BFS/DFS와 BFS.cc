#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

bool r[1001];
vector <int> v[1001];

void D(int n) {
	stack <int> s;
	s.push(n);
	while (!s.empty()) {
		int x = s.top(); s.pop();
		if (r[x]) { continue; }
		r[x] = true;
		cout << x << ' ';
		for (int n = v[x].size() - 1; n > -1; n--) {
			int y = v[x][n];
			s.push(y);
		}
	}
}

void B(int n) {
	queue <int> q;
	q.push(n);
	while (!q.empty()) {
		int x = q.front(); q.pop();
		if (r[x]) { continue; }
		r[x] = true;
		cout << x << ' ';
		for (int n = 0; n < v[x].size(); n++) {
			int y = v[x][n];
			q.push(y);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d, e; cin >> a >> b >> c;
	for (int n = 0; n < b; n++) {
		cin >> d >> e;
		if (d <= a && e <= a) {
			v[d].push_back(e);
			v[e].push_back(d);
		}
	}
	for (int n = 0; n < 1001; n++) { sort(v[n].begin(), v[n].end()); }
	fill_n(r, 1001, false); D(c);
	cout << '\n';
	fill_n(r, 1001, false); B(c);
	return 0;
}