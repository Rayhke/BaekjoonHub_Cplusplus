#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
	int N, If, For; cin >> N;
	while (N--) {
		cin >> If >> For;
		((If < 2 && For < 3) || (If < 3 && For < 2)) ? cout << "Yes\n" : cout << "No\n";
	}
	return 0;
}