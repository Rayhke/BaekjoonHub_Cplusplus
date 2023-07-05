#include <iostream>
#include <vector>
#include <algorithm>	// upper_bound, lower_bound
using namespace std;

vector <int> v;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, N, M; cin >> N;
	for (int n = 0; n < N; n++) { cin >> a; v.push_back(a); }
	sort(v.begin(), v.end()); cin >> M;
	for (int n = 0; n < M; n++) {
		cin >> b;
		cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), b) << ' ';
	}
	return 0;
}
/* ■ 설명 ■
algorithm 헤더파일에 존재 하는
upper_bound, lower_bound 의 기능은 무엇이느냐?
upper_bound 는 배열의 시작 지점과 끝 지점을 지정 후, 특정 원소 값 보다 '이하' 인 원소의 갯수를 출력하고,
lower_bound 는 배열의 시작 지점과 끝 지점을 지정 후, 특정 원소 값 보다 '이상' 인 원소의 갯수를 출력한다.
이 점을 합쳐서 응용하면
1 이상 또는 이하 만 찾게 된다 (즉, 1 이외의 원소 값은 출력하지 않음!)
*/
