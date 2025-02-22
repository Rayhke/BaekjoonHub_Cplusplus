#include <iostream>
using namespace std;

int main() {
	int N[5], Max = 0, Count = -1;
	for (int& n : N) {
		cin >> n; Max = max(n, Max);
	}
	for (int& n : N) {
		if (abs(Max - n) < 1001) {
			Count++;
		}
	}
	cout << Count;
	return 0;
}