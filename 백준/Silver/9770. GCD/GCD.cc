#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
using LL = long long;

vector<LL> Vec;

int main() {
	LL Max = 0, In;
	while (cin >> In) { Vec.push_back(In); }
	for (int n = 0; n < Vec.size(); n++) {
		for (int m = 0; m < Vec.size(); m++) {
			if (n == m) { continue; }
			Max = max(gcd(Vec[n], Vec[m]), Max);
		}
	}
	cout << Max;
	return 0;
}