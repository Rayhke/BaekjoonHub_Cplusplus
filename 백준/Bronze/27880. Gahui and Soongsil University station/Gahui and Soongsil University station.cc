#include <iostream>
using namespace std;

int main() {
	int N, Sum = 0; char S[6];
	for (int n = 0; n < 4; n++) {
		cin >> S >> N;
		Sum += (S[0] == 'E' ? 21 : 17) * N;
	}
	cout << Sum;
	return 0;
}