#include <iostream>
using namespace std;

int main() {
	int H, M, Charlie = 540; cin >> H >> M;
	M += H * 60;
	cout << M - Charlie;
	return 0;
}