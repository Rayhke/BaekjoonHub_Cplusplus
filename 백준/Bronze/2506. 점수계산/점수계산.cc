#include <iostream>
using namespace std;

int main() {
	bool M; int N, P = 0, C = 0; cin >> N;
	while (N--) {
		cin >> M;
		if (M) { P += 1 + (C++); }
		else { C = 0; }
	}
	cout << P;
	return 0;
}