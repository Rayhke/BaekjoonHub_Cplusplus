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
아직까지는 vector 기능을 완벽하게 이해한 것이 아니기에 한동안은 크기를 미리 지정하는 식으로 하길 권장

stable_sort 이 정렬은 sort와 달리 입력된 순서를 최대한 보존해주는 특이한 정렬 함수이다.

https://notepad96.tistory.com/37

https://dpdpwl.tistory.com/39
*/
