#include <iostream>
using namespace std;

int main() {
	int M, A, B; cin >> M >> A >> B;
	if (A != B) { cout << ((A < B) ? B - A : M - A + B); }
	else { cout << 0; }
	return 0;
}