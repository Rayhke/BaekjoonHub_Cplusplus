#include <iostream>
using namespace std;

int Arr[26], Count = 0;

int main() {
	char S[51]; cin >> S;
	for (const char& C : S) {
		if (C < 97 || 122 < C) { break; }
		Arr[C - 97]++;
	}
	Count += Arr[0]; Count += Arr[4]; Count += Arr[8];
	Count += Arr[14]; Count += Arr[20];
	cout << Count << ' ' << Count + Arr[24];
	return 0;
}