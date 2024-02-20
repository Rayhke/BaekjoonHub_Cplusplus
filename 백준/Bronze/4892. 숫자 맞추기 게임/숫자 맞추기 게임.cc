#include <iostream>
using namespace std;

int main() {
	int N; string S;
	for (int n = 1;; n++) {
		cin >> N; S = "even ";
		if (N == 0) { break; }
		if (N & 1) { S = "odd "; }
		cout << n << ". " << S << N / 2 << '\n';
	}
	return 0;
}