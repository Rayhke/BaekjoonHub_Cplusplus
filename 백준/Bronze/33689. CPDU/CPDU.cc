#include <iostream>
using namespace std;

int main() {
	int N, Count = 0; char S[21]; cin >> N;
	while (N--) {
		cin >> S;
		Count += S[0] == 'C' ? 1 : 0;
	}
	cout << Count;
	return 0;
}