#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool p(pair <int, int>& v1, pair<int, int>& v2) {
	if (v1.second != v2.second) { return (v1.second < v2.second); }
	else { return (v1.first < v2.first); }
	return 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a; cin >> a;
	vector <pair<int, int>> v(a);
	for (int n = 0; n < a; n++) { cin >> v[n].first >> v[n].second; }
	sort(v.begin(), v.end(), p);
	for (int n = 0; n < a; n++) { cout << v[n].first << ' ' << v[n].second << '\n'; }
	return 0;
}