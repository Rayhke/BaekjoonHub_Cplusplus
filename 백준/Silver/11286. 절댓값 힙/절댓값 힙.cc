#include <iostream>
#include <queue>
using namespace std;

class s {
public:
	bool operator()(const int& a, const int& b)const {
		if (abs(a) == abs(b)) { return a > b; }
		return abs(a) > abs(b);
	}
};

priority_queue <int, vector<int>, s> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b; cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b; 
		if (b != 0) { pq.push(b); }
		else {
			if (!pq.empty()) { cout << pq.top() << '\n'; pq.pop(); }
			else { cout << 0 << '\n'; }
		}
	}
	return 0;
}