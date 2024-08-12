#include <iostream>
using namespace std;

int main() {
	int N, In, Sum;
	while (1) {
		cin >> N; Sum = 0;
		if (N == 0) { break; }
		while (N--) {
			cin >> In;
			Sum += (Sum + In < 301) ? In : 0;
		}
		cout << Sum << '\n';
	}
	return 0;
}