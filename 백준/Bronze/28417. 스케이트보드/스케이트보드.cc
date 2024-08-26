#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, Run[2], Trick[5], Max = 0; cin >> N;
	while (N--) {
		for (int n = 0; n < 2; n++) { cin >> Run[n]; }
		for (int n = 0; n < 5; n++) { cin >> Trick[n]; }
		sort(Run, Run + 2);
		sort(Trick, Trick + 5);
		Max = max(Run[1] + Trick[3] + Trick[4], Max);
	}
	cout << Max;
	return 0;
}