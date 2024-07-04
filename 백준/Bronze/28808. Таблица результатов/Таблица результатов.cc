#include <iostream>
using namespace std;

int main() {
	int N, M, Count = 0; string S; cin >> N >> M;
	while (N--) {
		cin >> S;
		for (char C : S) {
			if (C == '+') { Count++; break; }
		}
	}
	cout << Count;
	return 0;
}