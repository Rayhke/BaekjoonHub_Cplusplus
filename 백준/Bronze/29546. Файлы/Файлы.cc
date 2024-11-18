#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, START, END; cin >> N;
	vector<string> V(N);
	for (auto& In : V) { cin >> In; }
	cin >> N;
	while (N--) {
		cin >> START >> END;
		for (int n = --START; n < END; n++) { cout << V[n] << '\n'; }
	}
	return 0;
}