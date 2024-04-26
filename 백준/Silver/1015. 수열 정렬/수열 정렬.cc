#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, result[50];
	pair<int, int> P[50]; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> P[n].first; P[n].second = n;
	}
	sort(P, P + N);
	for (int n = 0; n < N; n++) { result[P[n].second] = n; }
	for (int n = 0; n < N; n++) { cout << result[n] << ' '; }
	return 0;
}