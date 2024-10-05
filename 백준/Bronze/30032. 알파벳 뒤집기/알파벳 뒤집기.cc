#include <iostream>
using namespace std;

char Next[][2] = {
	{'p', 'd'},
	{'q', 'b'},
	{'b', 'q'},
	{'d', 'p'}
};

int main() {
	char Arr[10][10], C, In[11]; int N, D;
	cin >> N >> D; D--;
	for (int n = 0; n < N; n++) {
		cin >> In;
		for (int m = 0; m < N; m++) {
			if (In[m] < 101) { C = Next[(In[m] - 98) / 2][D]; }
			else { C = Next[In[m] - 110][D]; }
			Arr[n][m] = C;
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) { cout << Arr[n][m]; }
		cout << '\n';
	}
	return 0;
}