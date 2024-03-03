#include <iostream>
using namespace std;

int main() {
	int N, Pi[1000], start, end = 0, count = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Pi[n]; }
	start = Pi[0]; end = Pi[0];
	for (int n = 1; n < N; n++) {
		if (end < Pi[n]) { end = Pi[n]; }
		else {
			count = max((end - start), count);
			start = Pi[n]; end = Pi[n];
		}
	}
	count = max((end - start), count);
	cout << count;
	return 0;
}