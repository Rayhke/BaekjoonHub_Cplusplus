#include <iostream>
using namespace std;

int Result[][3] = {
	{0,1,0},
	{0,0,1},
	{1,0,0}
};

int main() {
	int N, V1, V2, Win = 0, Draw = 0;
	string S1, S2;
	cin >> N >> S1 >> S2;
	for (int n = 0; n < N; n++) {
		V1 = max(0, S1[n] - 81);
		V2 = max(0, S2[n] - 81);
		if (V1 == V2) { Draw++; }
		else { Win += Result[V1][V2]; }
	}
	N -= Draw;
	N /= 2;
	cout << ((Win > N) ? "victory" : "defeat");
	return 0;
}