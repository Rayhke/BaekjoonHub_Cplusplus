#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int B, Num, Result = 0; string N; cin >> N >> B;
	for (int n = 0; n < N.length(); n++) {
		if (47 < N[n] && N[n] < 58) { Num = N[n] - 48; }
		else { Num = N[n] - 55; }
		Result += pow(B, N.length() - n - 1) * Num;
	}
	cout << Result;
	return 0;
}