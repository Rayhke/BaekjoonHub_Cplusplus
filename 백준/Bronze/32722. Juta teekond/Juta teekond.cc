#include <iostream>
using namespace std;

int Check[][2] = {
	{1, 3},{6, 8},{2, 5}
};

int main() {
	bool R = 1; int In[3];
	for (int n = 0; n < 3; n++) { cin >> In[n]; }
	for (int n = 0; n < 3; n++) {
		if (In[n] == Check[n][0] || In[n] == Check[n][1]) {
			continue;
		}
		R = 0;
	}
	cout << (R ? "JAH" : "EI");
	return 0;
}