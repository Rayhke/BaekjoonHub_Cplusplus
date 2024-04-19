#include <iostream>
#include <vector>
#include <algorithm>
#define PAIR pair<int, int>
using namespace std;

int W[1000000];
PAIR V[1000000];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, X, Min = 10e9, Index = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> X; V[n] = { X,n };
	}
	sort(V, V + N);
	Min = min(V[0].first, Min);
	for (int n = 0; n < N; n++) {
		if (Min < V[n].first) {
			Min = V[n].first; Index++;
		}
		W[V[n].second] = Index;
	}
	for (int n = 0; n < N; n++) { cout << W[n] << ' '; }
	return 0;
}