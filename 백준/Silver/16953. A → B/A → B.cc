#include <iostream>
#include <queue>
using namespace std;

int main() {
	bool R = 1; int A, B, U = 1e9 + 1; cin >> A >> B;
	queue <pair<long long, int>> q; q.push({ A,1 });
	while (!q.empty()) {
		int P = q.front().second; long long X = q.front().first; q.pop();
		if (X > B) { continue; }
		if (X == B) { cout << P; R = 0; break; }
		if (X * 2 < U) { q.push({ X * 2,P + 1 }); }
		if (X * 10 + 1 < U) { q.push({ X * 10 + 1,P + 1 }); }
	}
	if (R) { cout << -1; }
	return 0;
}