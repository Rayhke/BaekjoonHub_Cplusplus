#include <iostream>
using namespace std;

bool w[26];
char v[20][21];
int R, C, P = 1, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };

void B(int N, int M, int K, char c) {
	P = max(P, K); w[c - 65] = 1;
	for (int n = 0; n < 4; n++) {
		int X = M + PX[n], Y = N + PY[n];
		char V = v[Y][X];
		if (X < 0 || C <= X || Y < 0 || R <= Y || w[V - 65]) { continue; }
		B(Y, X, K + 1, V);
	}
	w[c - 65] = 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> R >> C;
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) { cin >> v[n][m]; }
	}
	B(0, 0, 1, v[0][0]);
	cout << P;
	return 0;
}
