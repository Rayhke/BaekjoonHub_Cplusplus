#include <iostream>
#include <vector>
#include <string>
using namespace std;

int P = 0;
string S, K;
vector <int> w;

vector <int> KMP_Preprocess() {
	int n = 0, m = -1;
	const int N = K.length();
	vector <int> W(N + 1); W[n] = m;
	while (n < N) {
		while (m > -1 && K[n] != K[m]) { m = W[m]; }
		n++; m++; W[n] = m;
	}
	return W;
}

void KMP(vector <int> W) {
	int n = 0, m = 0;
	const int N = S.length(), M = K.length();
	while (n < N) {
		while (m > -1 && S[n] != K[m]) { m = W[m]; }
		n++; m++;
		if (m == M) {
			P++; w.push_back((n - M) + 1);
			m = W[m];
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	getline(cin, S); getline(cin, K);
	vector <int> W = KMP_Preprocess(); KMP(W);
	cout << P << '\n';
	for (const auto& n : w) { cout << n << ' '; }
	return 0;
}