#include <iostream>
using namespace std;

int main() {
	int N, now = 0, count = 0; string S; cin >> N >> S;
	for (char C : S) {
		if (C == 'L') {
			now = max(0, now - 1); continue;
		}
		now = min(2, now + 1);
		count += (now == 2) ? 1 : 0;
	}
	cout << count;
	return 0;
}