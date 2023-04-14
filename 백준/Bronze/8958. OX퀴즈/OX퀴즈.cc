#include <iostream>
using namespace std;

int main() {
	int N, M = 0, n[100002] = { 0 }, p = 0, q = 0;
	int S[100002] = { 0 };
	string s;
	cin >> N;
	for (int m = 0; m < N; m++) {
		cin >> s;
		while (1) {						// ' M ' 번째 퀴즈 전체 점수를 계산하는 시스템
			if (s[M] == 'O') {
				p++;
				if (M != 0 && s[M - 1] == 'O') {
					q++; p += q; 
				}
				else {
					q = 0;
				}
			}
			else if (s[M] == NULL) {
				break;
			}
			M++;
		}
		S[m] = p;						// ' M ' 번째 퀴즈 총합 점수를 ' M ' 번째에 기입
		s = { 0 };						// ' M ' 번째 퀴즈 문제 답안지 값 초기화
		M = 0;							// ' M ' 번째 퀴즈 문제 답안지 번호 값 초기화
		p = 0;							// ' M ' 번째 퀴즈 총합 점수 초기화
	}
	for (int l = 0; l < N; l++) {
		cout << S[l];
		if (l != N - 1) cout << "\n";
	}
	return 0;
}
