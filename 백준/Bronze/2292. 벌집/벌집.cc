#include <iostream>
using namespace std;

inline int s(int M, int L) { return M * L; }

int main() {
	int N, M = 1, L = 6, P = 1; cin >> N;
	while (N > P) { P = P + (s(M, L)); M++; }
	cout << M;
	return 0;
}
/* ■ 설명 ■
벌집이 바깥으로 한 칸씩 벗어날 때 마다, 증가하는 식을 떠올려 봐라
1 6 12 18 24 ㆍㆍㆍ
1 7 19 37 61 ㆍㆍㆍ

[테스트용]
#include <iostream>
using namespace std;

inline int s(int M, int L) { return M * L; }

int main() {
	int N, M = 1, L = 6, P = 1;
	cin >> N;
	if (N == 1) { cout << 1; }
	else {
		cout << "[" << s(M, L) << " / " << P << "] ";
		while (N > P) { P = P + (s(M, L)); M++; }
		cout << M;
	}
	return 0;
}
*/
