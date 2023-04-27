#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int m = 0; m < n; m++) {
		for (int l = 0; l <= m; l++) {
			cout << "*";
		}
		cout << endl;
	}
	while ((n - 1) > 0) {
		for (int m = 0; m < (n - 1); m++) {
			cout << "*";
		}
		cout << endl;
		n--;
	}
	return 0;
}
/* ■ 설명 ■

*/ 
