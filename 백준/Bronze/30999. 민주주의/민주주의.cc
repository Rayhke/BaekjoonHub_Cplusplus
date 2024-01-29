#include <iostream>
using namespace std;

int main() {
	short P, Count = 0; int N, M; string S;
	cin >> N >> M;
	while (N--) {
		cin >> S; P = 0;
		for (int n = 0; n < M; n++) {
			if (S[n] == 79) { P++; }
		}
		if (P > M / 2) { Count++; }
	}
	cout << Count;
	return 0;
}