#include <iostream>
using namespace std;

bool Seat[10][21];

int main() {
	int N, row, column; string S; cin >> N;
	while (N--) {
		cin >> S; 
		row = S[0] - 'A'; column = 0;
		for (int n = 1; n < S.length(); n++) {
			column *= 10;
			column += S[n] - '0';
		}
		Seat[row][column] = 1;
	}
	for (int n = 0; n < 10; n++) {
		for (int m = 1; m < 21; m++) {
			(Seat[n][m]) ? cout << 'o' : cout << '.';
		}
		cout << '\n';
	}
	return 0;
}