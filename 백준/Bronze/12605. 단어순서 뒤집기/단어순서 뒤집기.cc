#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <string> s;

int main() {
	int N; string L, P = ""; cin >> N; cin.ignore();	// cin >> N; 입력 때의 버퍼 지우기
	for (int n = 1; n <= N; n++) {
		getline(cin, L);
		for (int m = 0; m < size(L); m++) {
			if (L[m] == ' ') { continue; }
			P += L[m];
			if (L[m + 1] == ' ' || m + 1 == size(L)) { P += " "; s.push(P); P = ""; }	// 마지막 끝에 도달 하였을 때, m + 1 == size(L)
		}
		cout << "Case #" << n << ": ";
		while (!s.empty()) {
			cout << s.top(); s.pop();
		}
		cout << '\n';
	}
	return 0;
}
/* ■ 설명 ■
cin 입력을 했을 시, 끝자리에 '\n'이 입력 되는 데, 그것을 무조건 지워 줘야
getline 을 할 때, 입력이 밀리는 것을 방지한다.
*/
