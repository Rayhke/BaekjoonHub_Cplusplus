#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int M, C = 0, Sum = 0; string W, S; cin >> W >> M;
	for (int m = 0; m < M; m++) {
		cin >> S;
		if (S.length() < W.length()) { continue; }
		for (int n = 0; n <= S.length() - W.length(); n++) {
			for (int l = n; l < n + W.length(); l++) {
				if (S[l] != W[l - n]) { break; }
				C++;
			}
			if (C == W.length()) { Sum++; }
			C = 0;
		}
	}
	cout << Sum;
	return 0;
}