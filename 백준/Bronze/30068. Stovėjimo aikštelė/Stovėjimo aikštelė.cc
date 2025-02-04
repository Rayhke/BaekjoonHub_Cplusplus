#include <iostream>
#include <queue>
#include <map>
using namespace std;

map<int, int> Map;
queue<int> Queue;

int main() {
	int M, N, T; cin >> M;
	while (M--) {
		cin >> T >> N;
		if (!Map.count(N)) { Map[N] = T; }
		else { Map[N] = T - Map[N]; Queue.push(N); }
	}
	while (!Queue.empty()) {
		N = Queue.front(); Queue.pop();
		printf("%d %d\n", N, Map[N]);
	}
	return 0;
}