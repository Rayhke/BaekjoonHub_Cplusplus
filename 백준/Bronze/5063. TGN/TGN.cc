#include <iostream>
using namespace std;

int main() {
	int N, R, E, C; cin >> N;
	while (N--) {
		cin >> R >> E >> C; E -= C;
		if (R == E) { cout << "does not matter\n"; }
		else { cout << (R < E ? "advertise\n" : "do not advertise\n"); }
	}
	return 0;
}