#include <iostream>
using namespace std;

int main() {
	int T, V, E; cin >> T;
	for (int n = 0; n < T; n++) { cin >> V >> E; cout << E - V + 2 << '\n'; }
	return 0;
}