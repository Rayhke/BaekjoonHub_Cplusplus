#include <iostream>
using namespace std;

int H, W, Arr[2];

int main() {
	char S[101]; cin >> H >> W;
	while (H--) {
		cin >> S;
		for (int w = 0; w < W; w++) { Arr[S[w] - 48]++; }
	}
	cout << ((Arr[0] < Arr[1]) ? Arr[0] : Arr[1]);
	return 0;
}