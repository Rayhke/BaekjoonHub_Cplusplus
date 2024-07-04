#include <iostream>
using namespace std;

int main() {
	char S[101]; int N, M, Count = 0; cin >> N >> M;
	while (N--) {
		cin >> S;
		for (int m = 0; m < M; m++) {
			if (S[m] == 43) { Count++; break; }
		}
	}
	cout << Count;
	return 0;
}