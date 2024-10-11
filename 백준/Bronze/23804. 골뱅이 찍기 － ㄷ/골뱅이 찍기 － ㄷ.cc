#include <iostream>
using namespace std;

void P(const int& N, const string& S) {
	for (int n = 0; n < N; n++) {
		cout << S << '\n';
	}
}

int main() {
	int N; string S1 = "", S2 = ""; cin >> N;
	for (int n = 0; n < N; n++) {
		S1 += "@@@@@"; S2 += "@";
	}
	P(N, S1); P(N * 3, S2); P(N, S1);
	return 0;
}