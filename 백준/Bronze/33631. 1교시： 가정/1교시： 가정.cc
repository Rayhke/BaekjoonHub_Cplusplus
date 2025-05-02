#include <iostream>
using namespace std;

int main() {
	bool R; int User[4], Cost[4], Q, M, In, Sum = 0;
	for (int& user : User) { cin >> user; }
	for (int& cost : Cost) { cin >> cost; }
	cin >> Q;
	while (Q--) {
		cin >> M >> In; M -= 2;
		if (M == -1) {
			R = 1;
			for (int n = 0; n < 4; n++) {
				if (User[n] < Cost[n] * In) { R = 0; }
			}
			if (!R) { cout << "Hello, siumii\n"; continue; }
			Sum += In;
			for (int n = 0; n < 4; n++) {
				User[n] -= Cost[n] * In;
			}
			cout << Sum << '\n';
		}
		else {
			User[M] += In;
			cout << User[M] << '\n';
		}
	}
	return 0;
}