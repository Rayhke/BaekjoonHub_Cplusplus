#include <iostream>
using namespace std;

int Sum[2], M[] = { 0, 0, 1, 2 }, Point[][3] = { {9,0,1},{1,9,0},{0,1,9} };

int main() {
	int N; char S[101], T[101]; cin >> N >> S >> T;
	for (int n = 0; n < N; n++) {
		Sum[Point[M[S[n] - 80]][M[T[n] - 80]]]++;
	}
	cout << Sum[0] << ' ' << Sum[1];
	return 0;
}