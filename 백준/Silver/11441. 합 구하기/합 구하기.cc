#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v;
queue <int> q;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c = 0; cin >> a;
	for (int n = 0; n < a; n++) {
		if (n > 0) { c = v[n - 1]; }
		cin >> b; v.push_back(b + c);
	}
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> c;
		if (b == 1) { q.push(v[c - 1]); }
		else { q.push(v[c - 1] - v[b - 2]); }
	}
	while (!q.empty()) {
		cout << q.front() << '\n'; q.pop();
	}
	return 0;
}