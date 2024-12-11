#include <iostream>
using namespace std;

int N;

inline void print(string &str) {
	for (int n = 0; n < N; n++) { cout << str << '\n'; }
}

int main() {
	string S = "", P = ""; cin >> N;
	for (int n = 0; n < N; n++) {
		S += "@"; P += "@@@@@";
	}
	for (int n = 0; n < N * 3; n++) { S += " "; }
	for (int n = 0; n < N; n++) { S += "@"; }
	print(S); print(P); print(S); print(P); print(S);
	return 0;
}