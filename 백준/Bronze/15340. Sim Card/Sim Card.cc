#include <iostream>
using namespace std;

int Arr[3][2] = { {30,40},{35,30},{40,20} };

int main() {
	int In[2], Min, Count;
	while (1) {
		cin >> In[0] >> In[1]; Min = 1e9;
		if (In[0] + In[1] == 0) { break; }
		for (int n = 0; n < 3; n++) {
			Count = 0;
			for (int m = 0; m < 2; m++) {
				Count += In[m] * Arr[n][m];
			}
			Min = min(Count, Min);
		}
		cout << Min << '\n';
	}
	return 0;
}