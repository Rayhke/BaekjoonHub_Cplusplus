#include <iostream>
using namespace std;

int result, input;

int TestCase(int N) {
	int count = 0;
	for (int n = 0; n < N; n++) {
		cin >> result >> input;
		if (result != input) { continue; }
		count++;
	}
	return count;
}

int main() {
	int S1, S2, sample = 0, system = 0; cin >> S1 >> S2;
	sample = TestCase(S1); system = TestCase(S2);
	if (S2 != 0) {
		if (S1 != sample) { cout << "Wrong Answer"; return 0; }
		(S2 == system) ? cout << "Accepted" : cout << "Why Wrong!!!";
	}
	else {
		(S1 == sample) ? cout << "Accepted" : cout << "Wrong Answer";
	}
	return 0;
}