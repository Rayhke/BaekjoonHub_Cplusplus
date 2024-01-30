#include <iostream>
using namespace std;

int main() {
	int N; string S; cin >> N >> S;
	if (S[N - 1] == 71) { S = S.substr(0, N - 1); }
	else { S += 'G'; }
	cout << S;
	return 0;
}