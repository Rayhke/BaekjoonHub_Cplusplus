#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool p(pair<int, string> v1, pair<int, string>v2) { return v1.first < v2.first; }

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	vector <pair<int, string>> v(a);					// 굳이 이렇게 한 이유는
	for (int n = 0; n < a; n++) { cin >> v[n].first >> v[n].second; }
	stable_sort(v.begin(), v.end(), p);
	for (int n = 0; n < a; n++) { cout << v[n].first << ' ' << v[n].second << '\n'; }
	return 0;
}
/*
*/
