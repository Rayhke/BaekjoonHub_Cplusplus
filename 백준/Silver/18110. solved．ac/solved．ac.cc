#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M = 0; double p, q = 0; cin >> N;
	vector <int> v(N);
	p = round((double)N * 0.15);
	M = N - (p * 2);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = p; n < N - p; n++) { q += v[n]; }
	if (N != 0) { cout << round(q / M); }
	else { cout << 0; }
	return 0;
}
/* ■ 설명 ■
[오답 원인]
[N] 이 ' 0 ' 으로 입력 되었을 때
' 0 ' 이 출력 되는 것이 아닌, ' -nan(ind) ' 가 출력된다.
*/
