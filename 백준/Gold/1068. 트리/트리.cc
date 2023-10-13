#include <iostream>
#include <vector>
using namespace std;

bool r[50];
int N, M, L, P = 0;
vector <int> v[50];

void V(int S) {
	bool R = 1;
	for (const auto& n : v[S]) {
		if (!r[n]) { R = 0; r[S] = 1; V(n); }
	}
	if (R) { P++; }
}

int main() {
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M != -1) { v[M].push_back(n); }
		else { L = n; }
	}
	cin >> M; r[M] = 1;
	if (!r[L]) { r[L] = 1; V(L); }
	cout << P;
	return 0;
}