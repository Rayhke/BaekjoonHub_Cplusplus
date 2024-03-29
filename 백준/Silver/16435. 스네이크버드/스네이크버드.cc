#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[1000] = {}, N, L; cin >> N >> L;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	sort(a, a + N);
	for (int n = 0; n < N; n++) {
		if (L < a[n]) { break; }
		else { L++; }
	}
	cout << L;
	return 0;
}
/* ■ 설명 ■
처음 뱀의 길이는 [L] 이며
[N] 개의 열매가 각각 [a[n]]의 배열에 담긴
원소 값 만큼의 높이에 존재하며, 자신의 길이보다 작거나 같은	// (뱀 길이 ≥ 열매 높이)
높이의 열매는 모조리 먹을 수 있지만, 자기보다 높은 곳에
존재하는 열매는 먹을 수 없다. 그렇다면
최대한 많이 먹었다면, 뱀의 길이는 어느정도 인가?
============================================================
우선 [a[n]] 배열에 담긴 원소 값들을 오름차순으로 정렬하고
[L] 와 비교 연산을 계속 반복하여, 최대한 조건에 성립하는 대로
시행하면 된다.
*/
