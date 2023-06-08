#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int a; cin >> a;
	for (int n = 1; n <= a; n++) { q.push(n); }
	for (int n = 0; n < a - 1; n++) {
		q.pop(); q.push(q.front());
		q.pop();
	}
	cout << q.front();
	return 0;
}