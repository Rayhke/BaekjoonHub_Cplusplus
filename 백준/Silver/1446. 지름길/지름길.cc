#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using PAIR = pair<pair<int, int>, int>;

int Min;
vector<PAIR> In(12);

int main() {
	int N, D, S, E, C, DP[10001]; cin >> N >> D;
	for (int n = 0; n < N; n++) {
		cin >> S >> E >> C;
		In[n] = { {S,E},C };
	}
	sort(In.begin(), In.begin() + N, [](const PAIR& P1, const PAIR& P2) {
		auto [T1, C1] = P1; auto [S1, E1] = T1;
		auto [T2, C2] = P2; auto [S2, E2] = T2;
		if (S1 != S2) return S1 < S2;
		if (E1 != E2) return E1 > E2;
		return C1 < C2;
		});
	for (int n = 0; n <= D; n++) { DP[n] = Min++; }
	for (const auto in : In) {
		S = in.first.first;
		E = in.first.second;
		if (S > D || E > D) { continue; }
		C = in.second;
		if (DP[E] > DP[S] + C) {
			DP[E] = DP[S] + C;
			for (int n = E + 1; n <= D; n++) {
				if (DP[n] < DP[n - 1] + 1) { break; }
				DP[n] = DP[n - 1] + 1;
			}
		}
	}
	cout << DP[D];
	return 0;
}