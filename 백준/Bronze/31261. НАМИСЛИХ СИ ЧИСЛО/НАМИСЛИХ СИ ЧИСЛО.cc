#include <iostream>
using namespace std;

int main() {
	int A, B; cin >> A >> B;
	B = (((B + A) * A) + A) * A;
	cout << B;
	return 0;
}