#include <iostream>
using namespace std;

int main() {
	int N, S, Count = 0, Max = 0; cin >> N;
	while (N--) {
		cin >> S;
		if (S != 0) { Count++; continue; }
		Max = max(Count, Max); Count = 0;
	}
	Max = max(Count, Max);
	cout << Max;
	return 0;
}