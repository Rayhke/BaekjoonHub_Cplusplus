#include <iostream>
using namespace std;

int main() {
	long long N, K, A, B, C;
	cin >> N >> K;
	C = K;
	for (int n = 0; n < 3; n++) {
		cin >> A >> B;
		C += (A - B);
	}
	cout << "비와이";
	return 0;
}