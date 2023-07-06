#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	stack <int> s;
	short int M; int N, X; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M == 1) { cin >> X; s.push(X); }
		else if (M == 2) {
			if (!s.empty()) { cout << s.top() << '\n'; s.pop(); }
			else { cout << -1 << '\n'; }
		}
		else if (M == 3) { cout << s.size() << '\n'; }
		else if (M == 4) { cout << s.empty() << '\n'; }
		else if (M == 5) {
			if (!s.empty()) { cout << s.top() << '\n'; }
			else { cout << -1 << '\n'; }
		}
	}
	return 0;
}