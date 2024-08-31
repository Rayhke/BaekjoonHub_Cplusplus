#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, In, Now; queue<int> Q;
	while (1) {
		cin >> N; Now = 0;
		if (N == 0) { break; }
		while (N--) {
			cin >> In;
			if (Now != In) { Now = In; Q.push(In); }
		}
		while (!Q.empty()) {
			cout << Q.front() << ' '; Q.pop();
		}
		cout << "$\n";
	}
	return 0;
}