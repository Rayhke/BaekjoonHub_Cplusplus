#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int Arr[4];
	for (int n = 0; n < 4; n++) { cin >> Arr[n]; }
	sort(Arr, Arr + 4);
	cout << Arr[0] * Arr[1] + Arr[2] * Arr[3];
	return 0;
}