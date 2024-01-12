#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, P; string K, S; cin >> N;
	while (N--) {
		cin >> K; S = "even\n";
		P = K[K.length() - 1] - 48;
		if (P & 1) { S = "odd\n"; }
		cout << S;
	}
	return 0;
}