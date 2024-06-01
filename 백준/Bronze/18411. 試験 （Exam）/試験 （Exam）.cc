#include <iostream>
using namespace std;

int main() {
	int A, B, C, Max = 0; cin >> A >> B >> C;
	Max = max(A + B, Max); Max = max(A + C, Max); Max = max(B + C, Max);
	cout << Max;
	return 0;
}