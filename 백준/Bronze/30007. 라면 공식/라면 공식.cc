#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int N, A, B, X; cin >> N;
	while (N--) {
		cin >> A >> B >> X;
		cout << A * (X - 1) + B << '\n';
	}
	return 0;
}
