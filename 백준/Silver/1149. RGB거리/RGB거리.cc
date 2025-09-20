#include <iostream>
using namespace std;

int Min = 1e9, Index[3][2] = { { 1, 2 }, { 0, 2 }, { 0, 1 } };

int main() {
	int N, In[1000][3] = { 0 }, DP[1000][3] = { 0 }; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int& in : In[n]) { cin >> in; }
	}
	for (int n = 0; n < 3; n++) {
		DP[0][n] = In[0][n];
	}
	for (int n = 1; n < N; n++) {
		for (int m = 0; m < 3; m++) {
			DP[n][m] = min(DP[n - 1][Index[m][0]], DP[n - 1][Index[m][1]]) + In[n][m];
		}
	}
	for (int& dp : DP[N - 1]) { Min = min(dp, Min); }
	cout << Min;
	return 0;
}