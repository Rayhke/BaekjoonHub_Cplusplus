#include <iostream>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool R; int N, M, Sum = 0; char C = '_';
	string S, P, Q; cin >> N >> S;
	while (N--) {
		cin >> P >> M; R = 0;
		istringstream iss(P);
		while (getline(iss, Q, C)) {
			if (Q == S) { R = 1; break; }
		}
		Sum += R ? M : 0;
	}
	cout << Sum;
	return 0;
}