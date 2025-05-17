#include <iostream>
using namespace std;

string Team[] = { "Joffrey","Robb","Stannis" };

int main() {
	int In[6], Max = 0;
	for (int n = 0; n < 6; n++) { cin >> In[n]; }
	for (int n = 0; n < 3; n++) {
		In[n] *= In[n + 3];
		Max = max(In[n], Max);
	}
	for (int n = 0; n < 3; n++) {
		if (In[n] < Max) { continue; }
		cout << Team[n] << ' ';
	}
	return 0;
}
