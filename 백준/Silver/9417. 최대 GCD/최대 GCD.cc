#include <iostream>
#include <sstream>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

vector<int> Vec;

int main() {
	int N, Max, In; string S; cin >> N; cin.ignore();
	while (N--) {
		getline(cin, S); Max = 0;
		istringstream iss(S);
		while (iss >> In) { Vec.push_back(In); }
		for (int n = 0; n < Vec.size(); n++) {
			for (int m = 0; m < Vec.size(); m++) {
				if (n == m) { continue; }
				Max = max(gcd(Vec[n], Vec[m]), Max);
			}
		}
		cout << Max << '\n';
		Vec = vector<int>();
	}
	return 0;
}