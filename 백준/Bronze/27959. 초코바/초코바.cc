#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	if (100 * N >= M) cout << "Yes";
	else cout << "No";
	return 0;
}