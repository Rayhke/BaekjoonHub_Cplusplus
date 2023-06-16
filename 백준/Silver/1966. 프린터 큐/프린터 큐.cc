#include <iostream>
#include <queue>
using namespace std;

queue <int> q;	// 배열
queue <int> r;	// 배열 자릿 값
queue <int> v;	// 배열 결과 값

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[9] = {}, b, c = 0, d = 1, T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M; d = 1;
		for (int n = 0; n < N; n++) {
			cin >> b; q.push(b); r.push(n); a[b - 1]++;
			if (M == n) { c = n; }
		}
		for (int n = 8; n > -1; n--) {
			while (a[n] > 0) {
				while (q.front() != n + 1) {
					q.push(q.front()); r.push(r.front());
					q.pop(); r.pop();
				}
				if (r.front() == c) { v.push(d); }
				q.pop(); r.pop(); a[n]--; d++;
			}
		}
		for (int n = 0; n < 9; n++) { a[n] = 0; }	// 배열에 할당된 값 초기화 작업
		while (!q.empty()) { q.pop(); r.pop(); }	// 큐에 할당된 공간 초기화 작업
	}
	while (!v.empty()) { cout << v.front() << '\n'; v.pop(); }
	return 0;
}
/*
[검증 테스트용 코드]
#include <iostream>
#include <queue>
using namespace std;

queue <int> q;
queue <int> r;
queue <int> v;

int main() {
	int a[9] = {}, b, c = 0, d = 1, T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M; d = 1;
		for (int n = 0; n < N; n++) {
			cin >> b; q.push(b); r.push(n); a[b - 1]++;
			if (M == n) { c = n; }
		}
		cout << "\n큐에 담긴 값 체크 : ";
		for (int n = 0; n < N; n++) {
			cout << q.front() << " ";
			q.push(q.front()); q.pop();
		}
		cout << "\n\n";
		cout << "찾아야 되는 배열 위치 : " << c << "\n\n";
		for (int n = 8; n > -1; n--) {
			cout << "중요도 " << n + 1 << "단계 문서 갯수 : " << a[n] << '\n';
		}
		for (int n = 8; n > -1; n--) {
			while (a[n] > 0) {
				while (q.front() != n + 1) {
					q.push(q.front()); r.push(r.front());
					q.pop(); r.pop();
				}
				if (r.front() == c) { v.push(d); }
				q.pop(); r.pop(); a[n]--; d++;
			}
		}
		cout << "=================================\n";
		for (int n = 0; n < 9; n++) { a[n] = 0; }	// 배열에 할당된 값 초기화 작업
		while (!q.empty()) { q.pop(); r.pop(); }	// 큐에 할당된 공간 초기화 작업
	}
	while (!v.empty()) { cout << v.front() << '\n'; v.pop(); }
	return 0;
}
*/
