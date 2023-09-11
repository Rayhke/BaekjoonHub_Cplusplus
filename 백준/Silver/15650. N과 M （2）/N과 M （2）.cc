#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector <int> v(8, 0);
vector <bool> r(9, 1);

void V(int W, int P) {
	if (P == M) {			// 여기까지는 스스로의 머리로도 충분히 떠올렸음
		for (int n = 0; n < M; n++) { cout << v[n] << ' '; }
		cout << '\n'; return;
	}				// 이후의 설계부터 어찌 해야될지 감이 완벽하게 오지 않았음
	for (int n = W; n <= N; n++) {	// 아직 재귀 활용법을 완벽하게 이해하지 못한 듯 하다...
		if (r[n]) {
			r[n] = 0; v[P] = n;
			V(n + 1, P + 1); r[n] = 1;
		}
	}
}

int main() {
	cin >> N >> M; V(1, 0);
	return 0;
}
/* ■ 설명 ■
방문한 것을 체크하는 ' vector <bool> r ' 이 ' P ' 만큼, 재귀적으로 방문을 끝 마쳤다면
다시 맨 처음에 사용한 value 값을 재활용하여
또 다른 조합을 만들 수 있도록, 다시 활성화 해준다.
*/
