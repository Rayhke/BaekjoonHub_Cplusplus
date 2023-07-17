#include <iostream>
#include <algorithm>
using namespace std;

inline int p(int a[], int b[], int n) { return a[n] * b[n]; }

int main() {
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

=========================================================
[b] 배열의 순서를 건들이지 않고, [a] 배열의 순서만 조작하여
맞추는 것은 비효율적이라 판단 되어 편의상 둘다 정렬 하였으나
출제자의 의도와는 다른 듯 하다.
*/
