#include <iostream>
using namespace std;

int main() {
	int T, N, F; cin >> T >> N;
	while (N--) { cin >> F; T -= F; }
	printf("Padaeng_i %s", (T > 0) ? "Cry" : "Happy");
	return 0;
}