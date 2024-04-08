#include <iostream>
using namespace std;

bool check[26]; int arr[26];

int main() {
	int odd = 0, even = 0, count = 0; string S; cin >> S;
	for (char C : S) { check[C - 97] = 1; arr[C - 97]++; }
	for (int n = 0; n < 26; n++) {
		if (check[n]) {
			if (arr[n] & 1) { odd++; }
			else { even++; }
			count++;
		}
	}
	if (odd == count || even == count) { cout << (odd > even) ? 1 : 0; }
	else { cout << "0/1"; }
	return 0;
}