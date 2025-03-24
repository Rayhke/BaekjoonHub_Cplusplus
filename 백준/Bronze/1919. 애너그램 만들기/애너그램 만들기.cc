#include <iostream>
using namespace std;

int Use[26];

int main() {
	int N = 0; string S, P; cin >> S >> P;
	for (char& C : S) { Use[C - 97]++; }
	for (char& C : P) { Use[C - 97]--; }
	for (int& use : Use) { N += abs(use); }
	cout << N;
	return 0;
}