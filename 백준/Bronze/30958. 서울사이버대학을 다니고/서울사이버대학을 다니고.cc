#include <iostream>
#include <string>
using namespace std;

int Arr[26];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, Max = 0; string S; cin >> N;
	cin.ignore(); getline(cin, S);
	for (int n = 0; n < N; n++) { Arr[S[n] - 97]++; }
	for (int n = 0; n < 26; n++) { Max = max(Arr[n], Max); }
	cout << Max;
	return 0;
}