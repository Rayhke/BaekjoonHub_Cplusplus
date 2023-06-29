#include <iostream>
#include <queue>
using namespace std;

queue <float> q;

inline float s(float c, float e) { return (e / c) * 100; }

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a[1000] = {}, b, c, d, e = 0;
	float f = 0; cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> c; e = 0; f = 0;
		for (int m = 0; m < c; m++) {
			cin >> d; a[m] = d; f += d;
		}
		f /= c;
		for (int m = 0; m < c; m++) {
			if (a[m] > f) { e++; }
		}
		q.push(s(c, e));
	}
	cout << fixed;
	cout.precision(3);
	for (int n = 0; n < b; n++) {
		cout << q.front() << "%\n"; q.pop();
	}
	return 0;
}