#include <iostream>
using namespace std;

int main() {
	int X, Y; char A[3], B[3]; cin >> A >> B;
	X = abs(A[0] - B[0]); Y = abs(A[1] - B[1]);
	cout << min(X, Y) << ' ' << max(X, Y);
	return 0;
}