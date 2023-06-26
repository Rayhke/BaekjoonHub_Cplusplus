#include <iostream>
#include <deque>
using namespace std;

deque <int> dq;
deque <int> de;

int main() {
	int a, b; cin >> a;
	for (int n = 0; n < a; n++) { cin >> b; dq.push_back(b); de.push_back(n + 1); }
	for (int n = 0; n < a; n++) {
		cout << de.front() << ' '; de.pop_front();
		b = dq.front(); dq.pop_front();
		if (!de.empty()) {
			if (b > 0) {
				for (int n = 0; n < b - 1; n++) {
					de.push_back(de.front()); de.pop_front();
					dq.push_back(dq.front()); dq.pop_front();
				}
			}
			else {
				for (int n = 0; n < -b; n++) {
					de.push_front(de.back()); de.pop_back();
					dq.push_front(dq.back()); dq.pop_back();
				}
			}
		}
	}
	return 0;
}