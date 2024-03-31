#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int Arr[3]; string S;
	for (int n = 0; n < 3; n++) { cin >> Arr[n]; }
	cin >> S; sort(Arr, Arr + 3);
	for (char C : S) {
		cout << Arr[C - 65] << ' ';
	}
	return 0;
}