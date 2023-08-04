#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>	// isdigit // 문자열이 숫자인지 아닌지 탐색용
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M; string s; cin >> N >> M;
	map <string, int> Mp; vector <string> v;
	for (int n = 1; n <= N; n++) { cin >> s; Mp.insert({ s,n }); v.push_back(s); }
	for (int n = 0; n < M; n++) {
		cin >> s;
		if (isdigit(s[0])) { cout << v[stoi(s) - 1] << '\n'; }
		else { cout << Mp[s] << '\n'; }
	}
	return 0;
}
/* ■ 설명 ■
문제의 결론은 무엇이느냐면
배열에 문자열을 담고, 마지막에 문자열 or 배열 위치 값으로 검색 하는 것에 따라
문자열 → 배열 위치 값 or 배열 위치 값 → 문자열 결과를 반환 해주면 된다.

시간 제약 때문에 원랜 map을 2개로 생성하여
int 을 Key, string 을 Value 로 한 것과
string 을 Key, int Value 로 한 경우를 2가지 만들어서 공간 복잡도가 아주 나빴는 데

다른 사람의 구조에 아이디어를 따와서
어찌됬던 검색할 때, 문자열 기준으로 할 때만 map 의 힘을 빌리고
배열 자릿 값으로 검색하고자 하면 그냥 원래하던 배열로 검색하면 되지 않은 가?
*/
