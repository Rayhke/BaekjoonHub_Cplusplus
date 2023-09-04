#include <iostream>
#include <vector>
#include <queue>
using namespace std;

priority_queue <int, vector<int>> pq01, pq02, pq03, pq04, pq05, pq06, pq07, pq08, pq09, pq10, pq11;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector <int> v(12, 0);
	int N, K, P, W; long long M = 0; cin >> N >> K;
	for (int n = 0; n < N; n++) {
		cin >> P >> W;
		switch (P) {
		case 1:
			pq01.push(W); break;
		case 2:
			pq02.push(W); break;
		case 3:
			pq03.push(W); break;
		case 4:
			pq04.push(W); break;
		case 5:
			pq05.push(W); break;
		case 6:
			pq06.push(W); break;
		case 7:
			pq07.push(W); break;
		case 8:
			pq08.push(W); break;
		case 9:
			pq09.push(W); break;
		case 10:
			pq10.push(W); break;
		case 11:
			pq11.push(W); break;
		}
	}
	pq01.push(0); pq02.push(0); pq03.push(0); pq04.push(0); pq05.push(0);
	pq06.push(0); pq07.push(0); pq08.push(0); pq09.push(0); pq10.push(0); pq11.push(0);
	for (int n = 0; n < K; n++) {
		v[1] = pq01.top(); pq01.pop();
		v[2] = pq02.top(); pq02.pop();
		v[3] = pq03.top(); pq03.pop();
		v[4] = pq04.top(); pq04.pop();
		v[5] = pq05.top(); pq05.pop();
		v[6] = pq06.top(); pq06.pop();
		v[7] = pq07.top(); pq07.pop();
		v[8] = pq08.top(); pq08.pop();
		v[9] = pq09.top(); pq09.pop();
		v[10] = pq10.top(); pq10.pop();
		v[11] = pq11.top(); pq11.pop();
		for (int m = 1; m < 12; m++) { if (v[m] > 0) { v[m]--; } }
		pq01.push(v[1]); pq02.push(v[2]); pq03.push(v[3]); pq04.push(v[4]); pq05.push(v[5]);
		pq06.push(v[6]); pq07.push(v[7]); pq08.push(v[8]); pq09.push(v[9]); pq10.push(v[10]); pq11.push(v[11]);
	}
	M += pq01.top(); M += pq02.top(); M += pq03.top(); M += pq04.top(); M += pq05.top();
	M += pq06.top(); M += pq07.top(); M += pq08.top(); M += pq09.top(); M += pq10.top(); M += pq11.top();
	cout << M;
	return 0;
}