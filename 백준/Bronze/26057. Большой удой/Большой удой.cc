#include <iostream>
using namespace std;

int main() {
	int L, T; cin >> L >> T;
	L -= T; T -= L;
	cout << T;
	return 0;
}