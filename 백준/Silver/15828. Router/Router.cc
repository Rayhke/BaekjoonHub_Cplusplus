#include <iostream>
#include <queue>
using namespace std;

queue <int> q;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0; cin >> a;
	while (b != -1) {
		cin >> b;
		if (b > 0 && (q.size() < a)) { q.push(b); }
		else if (b == 0 && !q.empty()) { q.pop(); }
	}
	if (!q.empty()) { while (!q.empty()) { cout << q.front() << " "; q.pop(); } }
	else { cout << "empty"; }
	return 0;
}