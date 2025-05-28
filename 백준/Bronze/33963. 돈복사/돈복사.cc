#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M, Count = 0; cin >> N;
	M = to_string(N).length();
	while (1) {
		N *= 2;
		if (to_string(N).length() != M) {
			break;
		}
		Count++;
	}
	cout << Count;
	return 0;
}