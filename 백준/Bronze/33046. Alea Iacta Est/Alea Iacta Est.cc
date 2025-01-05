#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;

int main() {
	int A, B, C, D, Result; cin >> A >> B >> C >> D;
	for (int n = 1; n < 5; n++) { Q.push(n); }
	for (int n = 0; n < A + B; n++) {
		Result = Q.front();
		Q.pop(); Q.push(Result);
	}
	for (int n = 1; n < C + D; n++) {
		Result = Q.front();
		Q.pop(); Q.push(Result);
	}
	cout << Result;
	return 0;
}