#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<int> Queue;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int Q, Count; string S; cin >> Q;
	while (Q--) {
		cin >> S; Count = 0;
		for (int n = 0; n < S.length(); n++) {
			if (S[n] == 'W' && S.length() - n > 2) { Queue.push(n); }
		}
		while (!Queue.empty()) {
			Count += (S.substr(Queue.front(), 3) == "WOW") ? 1 : 0;
			Queue.pop();
		}
		cout << Count << '\n';
	}
	return 0;
}