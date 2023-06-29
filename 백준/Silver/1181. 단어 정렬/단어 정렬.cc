#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> v;

bool p(string& v1, string& v2) {
	if (size(v1) == size(v2)) {
		int b = 0;
		while (b < v1.size()) {
			if (v1[b] != v2[b]) { return v1[b] < v2[b]; }
			b++;
		}
	}
	else if (size(v1) < size(v2)) { return 1; }
	return 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a; string s; cin >> a;
	for (int n = 0; n < a; n++) { cin >> s; v.push_back(s); }
	sort(v.begin(), v.end(), p);
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int n = 0; n < v.size(); n++) { cout << v[n] << '\n'; }
	return 0;
}
/* ■ 설명 ■
v.erase 는 해당하는 위치의 특정 원소를 지우는 역할을 하며,	// 동시에 빈 공간도 없앤다.
unique은 중복하는 원소를 제거하는 역할을 한다.
*/
