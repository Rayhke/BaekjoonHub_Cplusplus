#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N[4];
	for (int n = 0; n < 4; n++) { cin >> N[n]; }
	sort(N, N + 4);
	cout << abs((N[0] + N[3]) - (N[1] + N[2]));
	return 0;
}