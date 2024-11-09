#include <iostream>
using namespace std;

int H, W, Arr[2];

int main() {
	string S; cin >> H >> W;
	for (int h = 0; h < H; h++) {
		cin >> S;
		for (char C : S) { Arr[C - 48]++; }
	}
	cout << ((Arr[0] < Arr[1]) ? Arr[0] : Arr[1]);
	return 0;
}