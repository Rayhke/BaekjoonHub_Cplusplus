#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, A, B, C1 = 0, C2 = 0; cin >> N;
	while (N--) {
		cin >> A >> B;
		if (A == B) { continue; }
		(A > B) ? C1++ : C2++;
	}
	printf("%d %d", C1, C2);
	return 0;
}