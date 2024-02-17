#include <iostream>
using namespace std;

char C1, C2; int T, N, Player[2], Point[4][4];
string S;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	Point[3][2] = 1; Point[2][0] = 1; Point[0][3] = 1;
	cin >> T;
	while (T--) {
		cin >> N;
		Player[0] = 0; Player[1] = 0;
		while (N--) {
			cin >> C1 >> C2;
			if (C1 == C2) { continue; }
			Player[Point[C1 - 80][C2 - 80]]++;
		}
		if (Player[0] != Player[1]) {
			S = (Player[0] > Player[1]) ? "Player 1" : "Player 2";
		}
		else { S = "TIE"; }
		cout << S << '\n';
	}
	return 0;
}