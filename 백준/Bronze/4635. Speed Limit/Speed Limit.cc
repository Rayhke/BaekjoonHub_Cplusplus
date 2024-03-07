#include <iostream>
using namespace std;

int main() {
	int N, S, T, value, count;
	while (1) {
		cin >> N;
		if (N == -1) { break; }
		value = 0; count = 0;
		while (N--) {
			cin >> S >> T;
			value += S * (T - count);
			count = T;
		}
		cout << value << " miles\n";
	}
	return 0;
}