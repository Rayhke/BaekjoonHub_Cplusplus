#include <iostream>
using namespace std;

int main() {
	int A, P, C; cin >> A >> P >> C;
	cout << max(A + C, P);
	return 0;
}