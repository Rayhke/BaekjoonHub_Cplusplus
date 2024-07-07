#include <iostream>
using namespace std;

int Arr[26], Count = 0;

int main() {
	char S[51], Index[] = "aeiou"; cin >> S;
	for (const char& C : S) {
		if (C < 97 || 122 < C) { break; }
		Arr[C - 97]++;
	}
	for (const char& C : Index) { Count += Arr[C - 97]; }
	cout << Count << ' ' << Count + Arr[24];
	return 0;
}