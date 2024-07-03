#include <iostream>
using namespace std;

int Count = 0, W[] = { -1,0,0,0,1 };
string S, K = "kick";

void KMP() {
	int n = 0, m = 0;
	const int N = S.length(), M = 4;
	while (n < N) {
		while (m > -1 && S[n] != K[m]) { m = W[m]; }
		n++; m++;
		if (m == M) { Count++; m = W[m]; }
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> S; KMP();
	cout << Count;
	return 0;
}