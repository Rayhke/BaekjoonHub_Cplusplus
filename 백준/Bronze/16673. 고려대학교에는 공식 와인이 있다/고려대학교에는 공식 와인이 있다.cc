#include <iostream>
using namespace std;

int main() {
	int C, K, P, Count = 0; cin >> C >> K >> P;
	for (int c = 1; c <= C; c++) {
		Count += (K * c + P * c * c);
	}
	cout << Count;
	return 0;
}