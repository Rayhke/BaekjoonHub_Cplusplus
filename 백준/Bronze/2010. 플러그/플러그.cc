#include <iostream>
using namespace std;

int s(int a, int b) {
	return b + (a - 1);
}

int main() {
	int N, a, b = 1;
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> a;
		if (a == 1) { continue; }
		else { b = s(a, b); }
	}
	cout << b << endl;
	return 0;
}