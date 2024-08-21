#include <iostream>

int Result[5][5];

int main() {
	int In[4];
	for (int& i : In) { std::cin >> i; }
	for (int n = 0; n < 4; n++) {
		for (int m = n + 1; m < 5; m++) {
			Result[n][m] += In[n];
			Result[m][n] += In[n];
			for (int l = n - 1; l > -1; l--) {
				Result[l][m] += In[n];
				Result[m][l] += In[n];
			}
		}
	}
	for (auto& arr : Result) {
		for (auto& value : arr) { std::cout << value << ' '; }
		std::cout << '\n';
	}
	return 0;
}