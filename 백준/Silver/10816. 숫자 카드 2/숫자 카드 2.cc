#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, N, M; cin >> N;
	for (int n = 0; n < N; n++) { cin >> a; v.push_back(a); }
	sort(v.begin(), v.end()); cin >> M;
	for (int n = 0; n < M; n++) {
		cin >> b;
		cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), b) << ' ';
	}
	return 0;
}