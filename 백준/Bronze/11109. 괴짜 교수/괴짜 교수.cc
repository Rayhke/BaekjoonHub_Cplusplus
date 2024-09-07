#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int T, D, N, S, P, NS, NPD; cin >> T;
	while (T--) {
		cin >> D >> N >> S >> P;
		NS = N * S; NPD = N * P + D;
		if (NS != NPD) {
			cout << ((NS < NPD) ? "do not parallelize\n" : "parallelize\n");
		}
		else {
			cout << "does not matter\n";
		}
	}
	return 0;
}