#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, In[20001]; cin >> N;
	for (int n = 1; n <= N; n++) {
		cin >> M; In[M] = n;
	}
	for (int n = 1; n <= N; n++) {
		cout << In[n] << '\n';
	}
	return 0;
}