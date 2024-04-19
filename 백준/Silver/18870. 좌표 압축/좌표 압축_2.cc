#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, L = 0;
	vector <int> v; map <int, int> mp; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M; v.push_back(M);
		if (!mp.count(M)) { mp.insert({ M,0 }); }
	}
	for (auto& n : mp) { n.second = L; L++; }
	for (int n = 0; n < N; n++) { cout << mp[v[n]] << ' '; }
}
/* ■ 설명 ■
자료구조 Map의 특성을 활용하여, 풀은 형식
*/
