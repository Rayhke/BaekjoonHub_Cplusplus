#include <iostream>
using namespace std;

int main() {
	bool R = 1; int N, A, B, Now[] = { 0,0 }; cin >> N;
	while (N--) {
		cin >> A >> B;
		if (Now[0] > A || Now[1] > B) { R = 0; }
		Now[0] = A; Now[1] = B;
	}
	cout << ((R) ? "yes" : "no");
	return 0;
}