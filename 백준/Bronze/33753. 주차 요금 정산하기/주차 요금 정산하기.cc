#include <iostream>
using namespace std;

int main() {
	int A, B, C, T, Sum = 0; cin >> A >> B >> C >> T;
	if (T > 30) {
		T -= 30;
		Sum += (T / B) * C;
		Sum += (T % B != 0 ? C : 0);
	}
	cout << Sum + A;
	return 0;
}