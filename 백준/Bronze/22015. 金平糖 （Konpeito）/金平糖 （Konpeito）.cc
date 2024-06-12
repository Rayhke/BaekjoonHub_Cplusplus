#include <iostream>
using namespace std;

int main() {
	int A, B, C, Max, Sum; cin >> A >> B >> C;
	Max = max(A, max(B, C)) * 3; Sum = A + B + C;
	cout << Max - Sum;
	return 0;
}