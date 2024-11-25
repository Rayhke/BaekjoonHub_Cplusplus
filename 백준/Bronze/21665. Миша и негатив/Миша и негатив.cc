#include <iostream>
using namespace std;

int main() {
	bool MAP[100][100]; int N, M, Count = 0;
	string S; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		cin >> S;
		for (int m = 0; m < M; m++) {
			MAP[n][m] = S[m] == 'B';
		}
	}
	for (int n = 0; n < N; n++) {
		cin >> S;
		for (int m = 0; m < M; m++) {
			Count += (MAP[n][m] ? 'B' : 'W') == S[m];
		}
	}
	cout << Count;
	return 0;
}