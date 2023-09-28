#include <iostream>
#include <vector>
#include <string>
using namespace std;

int P = 0;
string S, K;
vector <int> w;							// 문자열 ' S ' 안에 ' K ' 가 나타난 index 위치를 기록하는 용도 

vector <int> KMP_Preprocess() {
	int n = 0, m = -1;
	const int N = K.length();
	vector <int> W(N + 1); W[n] = m;
	while (n < N) {
		while (m > -1 && K[n] != K[m]) { m = W[m]; }
		n++; m++; W[n] = m;
	}
	return W;
}

void KMP(vector <int> W) {
	int n = 0, m = 0;
	const int N = S.length(), M = K.length();
	while (n < N) {
		while (m > -1 && S[n] != K[m]) { m = W[m]; }
		n++; m++;
		if (m == M) {
			P++; w.push_back((n - M) + 1);
			m = W[m];
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	getline(cin, S); getline(cin, K);
	vector <int> W = KMP_Preprocess(); KMP(W);
	cout << P << '\n';
	for (const auto& n : w) { cout << n << ' '; }
	return 0;
}
/* ■ 설명 ■
전형적인 KMP 알고리즘을 이용하여,
문자열 ' S ' 안에 문자열 ' K ' 가 몇개 존재하는 지와
어느 index 위치에 존재하는 지를 출력하는 문제이다.
*/
