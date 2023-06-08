#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int N, K; cin >> N >> K;
	int* a = new int[N];
	for (int n = 1; n <= N; n++) { q.push(n); }
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < K - 1; m++) {
			q.push(q.front()); q.pop();
		}
		a[n] = q.front(); 
		q.pop();
	}
	cout << "<";
	for (int n = 0; n < N; n++) { cout << a[n]; if ((N - 1) - n) { cout << ", "; } }
	cout << ">";
	delete[]a;
	return 0;
}