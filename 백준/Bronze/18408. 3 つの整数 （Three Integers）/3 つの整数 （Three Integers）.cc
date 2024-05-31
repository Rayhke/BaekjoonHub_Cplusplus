#include <iostream>
using namespace std;

int main() {
	int arr[] = { 0,0,0 }, input;
	for (int n = 0; n < 3; n++) {
		cin >> input; arr[input]++;
	}
	(arr[1] > arr[2]) ? cout << 1 : cout << 2;
	return 0;
}