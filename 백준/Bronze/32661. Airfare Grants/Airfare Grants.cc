#include <iostream>
using namespace std;

int main() {
	int N, P, Min = 1e9, Max = 0; cin >> N;
	while (N--) {
		cin >> P;
		Min = min(P, Min);
		Max = max(P, Max);
	}
	cout << max(Min - Max / 2, 0);
	return 0;
}