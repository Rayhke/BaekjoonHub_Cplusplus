#include <iostream>
using namespace std;

int main() {
	char input[101]; int N, count = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> input[n]; }
	for (int n = 0; n < N; n++) {
		if (input[n] == 'j' || input[n] == 'i') { count += 2; }
		else if (input[n] == 'o') { count++; }
	}
	cout << count;
	return 0;
}