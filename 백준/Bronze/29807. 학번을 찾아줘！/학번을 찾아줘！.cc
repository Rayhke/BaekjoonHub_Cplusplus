#include <iostream>
using namespace std;

int T, In[5], Sum = 0;

int main() {
	cin >> T;
	for (int t = 0; t < T; t++) { cin >> In[t]; }
	Sum += abs(In[0] - In[2]) * (In[0] > In[2] ? 508 : 108);
	Sum += abs(In[1] - In[3]) * (In[1] > In[3] ? 212 : 305);
	Sum += In[4] != 0 ? In[4] * 707 : 0; Sum *= 4763;
	cout << Sum;
	return 0;
}