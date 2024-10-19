#include <iostream>
using namespace std;

int main() {
	char In, S[] = "ILOVEYONSEI"; cin >> In;
	int Count = 0, N;
	for (int n = 0; n < 11; n++) {
		N = abs(In - S[n]);
		In = S[n];
		Count += N;
	}
	cout << Count;
	return 0;
}