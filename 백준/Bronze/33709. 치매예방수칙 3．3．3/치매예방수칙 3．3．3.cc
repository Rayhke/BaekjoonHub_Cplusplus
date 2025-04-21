#include <iostream>
using namespace std;

int main() {
	int N, M = 0, Sum = 0; string S; cin >> N >> S;
	for (char& C : S) {
		if (C < 48 || 57 < C) {
			Sum += M; M = 0;
			continue;
		}
		M *= 10; M += C - 48;
	}
	cout << Sum + M;
	return 0;
}