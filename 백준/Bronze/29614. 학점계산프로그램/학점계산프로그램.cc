#include <iostream>
using namespace std;

int P = 69;
long double Sum = 0, Count = 0;

int main() {
	string S; cin >> S;
	for (int n = S.length() - 1; n > -1; n--) {
		if (S[n] == '+') { Sum += 0.5; continue; }
		Sum += max(P - S[n], 0); Count++;
	}
	cout << Sum / Count;
	return 0;
}