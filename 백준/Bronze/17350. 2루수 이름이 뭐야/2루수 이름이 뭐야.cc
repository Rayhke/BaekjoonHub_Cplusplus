#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	bool R = 0; int N; string S; cin >> N;
	while (N--) {
		cin >> S;
		if (S == "anj") { R = 1; }
	}
	cout << (R ? "뭐야;" : "뭐야?");
	return 0;
}