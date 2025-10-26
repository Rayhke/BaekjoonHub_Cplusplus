#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, In[500000]; cin >> N;
	for (int n = 0; n < N; n++) { cin >> In[n]; }
	sort(In, In + N);
	for (int n = 0; n < N; n++) { cout << In[n] << ' '; }
	return 0;

}
