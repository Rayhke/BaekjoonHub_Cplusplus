#include <iostream>
#include <stack>
using namespace std;

int N, arr[100001];
stack <int> s;

void GetMaxArea() {
	int n = 0, index, topArea, maxArea = 0;
	while (n < N) {
		while (n < N && (s.empty() || arr[s.top()] <= arr[n])) {
			s.push(n++);
		}
		while (!s.empty() && (n == N || arr[s.top()] > arr[n])) {
			index = s.top(); s.pop();
			if (s.empty()) { topArea = arr[index] * n; }
			else {
				topArea = arr[index] * (n - s.top() - 1);
			}
			maxArea = max(topArea, maxArea);
		}
	}
	cout << maxArea;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	for (int n = 0; n < N; n++) { cin >> arr[n]; }
	GetMaxArea();
	return 0;
}
/* ■ 설명 ■
배열의 값을 오름차순인 조건에 따라 받아들여, 조건이 성립 시
index 값을 저장 해두는 방식
*/
