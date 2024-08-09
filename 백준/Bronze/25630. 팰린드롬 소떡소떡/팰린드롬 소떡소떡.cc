#include <iostream>
using namespace std;

int main() {
	char S[101]; int N, Count = 0; cin >> N >> S;
	for (int n = 0; n < N / 2; n++) {
		if (S[n] != S[N - n - 1]) { Count++; }
	}
	cout << Count;
	return 0;
}