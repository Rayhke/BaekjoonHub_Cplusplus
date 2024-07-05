#include <iostream>
using namespace std;

int Count[26];

int main() {
	char S[1001]; int N, Result = 0; cin >> N >> S;
	for (int n = 0; n < N; n++) { Count[S[n] - 97]++; }
	cout << min(Count[2], min(min(Count[14], Count[15]), min(Count[18], Count[20])));
	return 0;
}