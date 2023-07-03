#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

bool r[101];
vector <int> v[101];
queue <int> q;
stack <int> s;

void p(int n) {
	q.push(n);
	while (!q.empty()) {
		int x = q.front(); q.pop();
		if (r[x]) { continue; }
		r[x] = true;
		s.push(x);
		for (int n = 0; n < v[x].size(); n++) {
			int y = v[x][n];
			q.push(y);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c, d; cin >> a >> b;
	for (int n = 0; n < b; n++) {
		cin >> c >> d;
		if (c <= a && d <= a) {
			v[c].push_back(d);
			v[d].push_back(c);
		}
	}
	for (int n = 0; n < 101; n++) {
		sort(v[n].begin(), v[n].end());
	}
	fill_n(r, 101, false);
	p(1);
	cout << s.size() - 1;
	return 0;
}