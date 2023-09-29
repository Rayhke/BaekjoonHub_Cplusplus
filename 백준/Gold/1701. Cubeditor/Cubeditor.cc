#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, P = 0, R; string C, S;

void KMP() {
	int n = 0, M = S.size();
	vector <int> W(M);
	for (int m = 1; m < M; m++) {
		while (n > 0 && S[m] != S[n]) { n = W[n - 1]; }
		if (S[m] == S[n]) { W[m] = ++n; P = max(P, n); }
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> C; N = C.size();
	for (int n = 0; n < N; n++) {
		S = C.substr(n, N); KMP();
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
KMP 문자열 알고리즘을 응용하여, 다른 방식 (Fail Function, 실패함수) 으로 해결하는 형태다.
' substr ' 는 (index_1, index_2) 이며 index_1 에서 index_2 까지의 string 문자열의 일부를 따오는 함수
*/
