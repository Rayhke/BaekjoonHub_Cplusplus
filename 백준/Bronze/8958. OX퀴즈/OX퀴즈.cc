#include <iostream>
using namespace std;

int main() {
	int N, M = 0, n[100002] = { 0 }, p = 0, q = 0;
	int S[100002] = { 0 };
	string s;
	cin >> N;
	for (int m = 0; m < N; m++) {
		cin >> s;
		while (1) {
			if (s[M] == 'O') {
				p++;
				if (M != 0 && s[M - 1] == 'O') {
					q++; p += q; 
				}
				else q = 0;
			}
			else if (s[M] == NULL) break;
			M++;
		}
		S[m] = p;
		s = { 0 };
		M = 0;
		p = 0;
	}
	for (int l = 0; l < N; l++) {
		cout << S[l];
		if (l != N - 1) cout << "\n";
	}
	return 0;
}