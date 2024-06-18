#include <iostream>
using namespace std;

int main() {
	int A, B, C; cin >> A >> B >> C;
	cout << (A <= C && C < B) ? 1 : 0;
	return 0;
}