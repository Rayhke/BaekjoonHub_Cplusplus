#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

vector <tuple<int, int, string>> v;

bool p(tuple<int, int, string> v1, tuple<int, int, string> v2) {
	if (get<0>(v1) != get<0>(v2)) { return get<0>(v1) < get<0>(v2); }
	else { return get<1>(v1) < get<1>(v2); }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b; string s; cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> s;
		v.push_back(make_tuple(b, n, s));
	}
	sort(v.begin(), v.end(), p);
	for (int n = 0; n < a; n++) {
		cout << get<0>(v[n]) << ' ' << get<2>(v[n]) << '\n';
	}
	return 0;
}