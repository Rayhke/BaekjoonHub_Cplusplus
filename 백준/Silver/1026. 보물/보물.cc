#include <iostream>
#include <algorithm>
using namespace std;

inline int p(int a[], int b[], int n) { return a[n] * b[n]; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[50] = {}, b[50] = {}, N, S = 0;
	cin >> N;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = 0; n < N; n++) { cin >> b[n]; }
	sort(a, a + N); sort(b, b + N, greater<>());	// greater 오름차순으로 정렬
	for (int n = 0; n < N; n++) { S = S + p(a, b, n); }
	cout << S;
	return 0;
}
/* ■ 설명 ■
b배열은 순서 건들이지 않고,
하라고 하는 데 글쎄다... 잘 모르겠다.
*/
