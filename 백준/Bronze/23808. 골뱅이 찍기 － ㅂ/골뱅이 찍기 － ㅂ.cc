#include <iostream>
using namespace std;

void print(const int& N, const string& S) {
	for (int n = 0; n < N; n++) { cout << S << '\n'; }
}

int main() {
	int N; string S1 = "", S2 = "", S3 = ""; cin >> N;
	for (int n = 0; n < N; n++) {
		S1 += "@";
		S2 += "   ";
		S3 += "@@@@@";
	}
	S1 = S1 + S2 + S1;
	print(N * 2, S1); print(N, S3);
	print(N, S1); print(N, S3);
	return 0;
}