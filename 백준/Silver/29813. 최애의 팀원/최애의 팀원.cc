#include <iostream>
#include <queue>
using namespace std;
using PAIR = pair<string, int>;

queue<PAIR> Queue;

int main() {
	int N; PAIR pair; cin >> N;
	while (N--) {
		cin >> pair.first >> pair.second;
		Queue.push(pair);
	}
	while (Queue.size() > 1) {
		pair = Queue.front(); Queue.pop();
		for (int n = 1; n < pair.second; n++) {
			Queue.push(Queue.front()); Queue.pop();
		}
		Queue.pop();
	}
	cout << Queue.front().first;
	return 0;
}