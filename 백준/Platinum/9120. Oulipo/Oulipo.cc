#include <iostream>
#include <vector>
#include <string>
using namespace std;

int P;
string W, T;
vector <int> v(10001);

void KMP_Preprocess() {
	int n = 0, m = -1;
	const int N = W.length(); v[n] = m;
	while (n < N) {
		while (m > -1 && W[n] != W[m]) { m = v[m]; }
		n++; m++; v[n] = m;
	}
}

void KMP() {
	int n = 0, m = 0;
	const int N = T.length(), M = W.length();
	while (n < N) {
		while (m > -1 && T[n] != W[m]) { m = v[m]; }
		n++; m++;
		if (m == M) { P++; m = v[m]; }
	}
	cout << P << '\n';
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> W >> T; P = 0;
		if (W.length() == T.length()) {
			(W == T) ? cout << 1 << '\n' : cout << 0 << '\n';
			continue;
		}
		KMP_Preprocess(); KMP();
	}
	return 0;
}