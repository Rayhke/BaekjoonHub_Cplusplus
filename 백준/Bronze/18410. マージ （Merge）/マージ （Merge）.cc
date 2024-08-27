#include <iostream>
using namespace std;

short Arr[2001];

int main() {
	int N, M, In; cin >> N >> M; N += M;
	while (N--) { cin >> In; Arr[In]++; }
	for (int n = 1; n < 2001; n++) {
		while (Arr[n]--) { printf("%d\n", n); }
	}
	return 0;
}