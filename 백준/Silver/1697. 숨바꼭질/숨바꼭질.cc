#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;

bool Check[MAX];
int N, K, move1, move2, move3;
queue <pair<int, int>> Q;

int main() {
	cin >> N >> K;
	if (N == K) { cout << 0; return 0; }
	Q.push({ N,1 });
	while (!Q.empty()) {
		auto [now, cost] = Q.front(); Q.pop();
		move1 = now + 1; move2 = now * 2; move3 = now - 1;
		if (move1 < MAX && !Check[move1]) {
			if (move1 == K) { cout << cost; break; }
			Check[move1] = 1;
			Q.push({ move1, cost + 1 });
		}
		if (move2 < MAX && !Check[move2]) {
			if (move2 == K) { cout << cost; break; }
			Check[move2] = 1;
			Q.push({ move2, cost + 1 });
		}
		if (move3 > -1 && !Check[move3]) {
			if (move3 == K) { cout << cost; break; }
			Check[move3] = 1;
			Q.push({ move3,cost + 1 });
		}
	}
	return 0;
}