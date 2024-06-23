#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, Min, Sum; cin >> A >> B >> C >> D;
	Min = min(min(A, B), min(C, D)) - 1;
	Sum = A + B + C + D; Sum -= Min;
	cout << Sum;
	return 0;
}