#include <iostream>
#include <queue>
using namespace std;

queue <int> q;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b = 0; cin >> a;
	do {
		cin >> b;
		if (b > 0 && (q.size() < a)) { q.push(b); }	// 'q.size() < a' 이게 핵심이다. 배열의 크기를 지정하듯, 흉내내기 가능함
		else if (b == 0 && !q.empty()) { q.pop(); }
	} while (b != -1);
	if (!q.empty()) { while (!q.empty()) { cout << q.front() << " "; q.pop(); } }
	else { cout << "empty"; }
	return 0;
}
