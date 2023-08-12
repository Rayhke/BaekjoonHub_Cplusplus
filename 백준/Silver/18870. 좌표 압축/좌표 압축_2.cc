#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, L = 0;
	vector <int> v; set <int> st; map <int, int> mp; cin >> N;
	for (int n = 0; n < N; n++) { cin >> M; v.push_back(M); st.insert(M); }
	for (const auto& n : st) { mp.insert({ n,L }); L++; }
	for (int n = 0; n < N; n++) { cout << mp[v[n]] << ' '; }
}
/* ■ 설명 ■
최초로 시도한 방법이며, 너무 비효율적으로 구성함
set에 일단 값을 중복 없이 오름차순으로 저장하는 용도로 사용하고
map은 정렬된 set의 값을 key 값으로 쓰는 동시에 배열 자릿 값을 value 처럼 응용함
*/
