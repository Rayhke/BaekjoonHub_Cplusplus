#include <iostream>
using namespace std;

int main() {
	int N, A, B, Min = 1e9; cin >> N;
	while (N--) {
		cin >> A >> B;
		if (A > B) { continue; }
		Min = min(B, Min);
	}
	cout << ((Min != 1e9) ? Min : -1);
	return 0;
}