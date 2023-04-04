#include <iostream>
using namespace std;

int main() {
	int n, m;
	double sum = 0, max = 0;
	cin >> n;
	for (int p = 0; p < n; p++) {
		cin >> m;
		sum += m;
		if (m > max) {
			max = m;
		}
	}
	cout << sum / n / max * 100;
	return 0;
}