#include <iostream>
using namespace std;

int main() {
	int T, E, F, arr[] = { 0,0 };
	for (int n = 0; n < 2; n++) {
		cin >> T >> E >> F;
		arr[n] = T * 3 + E * 20 + F * 120;
	}
	if (arr[0] != arr[1]) {
		(arr[0] > arr[1]) ? cout << "Max" : cout << "Mel";
	}
	else { cout << "Draw"; }
	return 0;
}