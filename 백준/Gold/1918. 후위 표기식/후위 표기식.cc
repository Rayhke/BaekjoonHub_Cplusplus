#include <iostream>
#include <stack>
using namespace std;

stack <char> s;

int main() {
	int arr[50];
	arr[40] = 1; arr[43] = 2; arr[45] = 2;
	arr[42] = 3; arr[47] = 3; arr[41] = 4;
	string S; cin >> S;
	for (char C : S) {
		if (65 <= C && C <= 90) { cout << C; }
		else if (C == 40) { s.push(C); }
		else if (C == 41) {
			while (!s.empty()) {
				if (s.top() == 40) { s.pop(); break; }
				cout << s.top(); s.pop();
			}
		}
		else {
			while (!s.empty() && arr[s.top()] >= arr[C]) { cout << s.top(); s.pop(); }
			s.push(C);
		}
	}
	while (!s.empty()) { cout << s.top(); s.pop(); }
	return 0;
}