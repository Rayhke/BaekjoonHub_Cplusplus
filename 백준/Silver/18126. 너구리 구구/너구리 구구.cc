#include <iostream>
#include <vector>
#include <queue>
#define Pair pair<long long, short>
using namespace std;

int N;
long long P = 0;
vector <Pair> v[5001];

void V() {
	vector <pair<long long, bool>> w(5001, { 0,0 });
	queue <Pair> q; q.push({ 0,1 });
	while (!q.empty()) {
		short X = q.front().second; long long z = q.front().first; q.pop();
		for (const auto& n : v[X]) {
			short Y = n.second; long long Z = n.first;
			if (w[Y].second) { continue; }
			w[Y].second = 1; w[Y].first = w[X].first + Z;
			P = max(w[Y].first, P); q.push({ w[Y].first,Y });
		}
	}
	cout << P;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	for (int n = 0, x, y, z; n < N - 1; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	V();
	return 0;
}