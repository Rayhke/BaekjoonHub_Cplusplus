#include <iostream>
using namespace std;

int main() {
	int N, Input[3], Count = 0; cin >> N;
	for (int n = 0; n < 3; n++) { cin >> Input[n]; }
	for (int n = 0; n < 3; n++) { Count += min(N, Input[n]); }
	cout << Count;
	return 0;
}