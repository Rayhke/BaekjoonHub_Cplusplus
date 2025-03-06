#include <iostream>
using namespace std;

int P = 69;
double Sum = 0, Count = 0;

int main() {
	string S; cin >> S;
	for (char& C : S) {
		if (C == '+') { Sum += 0.5; continue; }
		Sum += max(P - C, 0); Count++;
	}
	cout << Sum / Count;
	return 0;
}