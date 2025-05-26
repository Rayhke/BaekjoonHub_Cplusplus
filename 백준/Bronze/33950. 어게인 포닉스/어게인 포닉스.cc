#include <iostream>
#include <cstring>
using namespace std;

int main() {
	bool R; int T, N; char S[21]; cin >> T;
	while (T--) {
		cin >> S; R = 0; N = strlen(S);
		for (int n = 0; n < N; n++) {
			if (n + 1 >= N || S[n] != 'P' || S[n + 1] != 'O') {
				cout << S[n];
			}
			else {
				cout << "PHO"; n++;
			}
		}
		cout << '\n';
	}
	return 0;
}