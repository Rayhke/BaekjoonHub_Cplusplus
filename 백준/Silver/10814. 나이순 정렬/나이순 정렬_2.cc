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
/*
내가 굳이 pair이 아닌 tuple로 한 이유는
나이가 동일하다면, 이름이 입력된 순서대로 되도록 하기 위해
중간 값을 입력된 순서 값으로 사용했으나...더 좋은 방법이 있다.
*/
