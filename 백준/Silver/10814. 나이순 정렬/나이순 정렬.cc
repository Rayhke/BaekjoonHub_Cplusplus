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
/* ■ 설명 ■
메모리 공간 크기 사이즈를 미리 지정하여, 예상치 못한 배열 크기 밖의 공간에 들어가게 되는 경우를 방지
*/
