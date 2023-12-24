#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Min;
pair<int, int> P;

void init(vector<int>& v, vector<pair<int, int>>& tree, int node, int start, int end) {
	if (start == end) {
		int value = v[start];
		tree[node].first = value;
		tree[node].second = value;
	}
	else {
		int mid = (start + end) / 2;
		init(v, tree, node * 2, start, mid);
		init(v, tree, node * 2 + 1, mid + 1, end);
		tree[node].first = min(tree[node * 2].first, tree[node * 2 + 1].first);
		tree[node].second = max(tree[node * 2].second, tree[node * 2 + 1].second);
	}
}

pair<int, int> query(vector<pair<int, int>>& tree, int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return { 0,0 }; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	pair<int, int> L = query(tree, node * 2, start, mid, left, right);
	pair<int, int> R = query(tree, node * 2 + 1, mid + 1, end, left, right);
	if (L.first == 0 || R.first == 0) { Min = max(L.first, R.first); }
	else { Min = min(L.first, R.first); }
	return { Min,max(L.second,R.second) };
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, H, tree_size, L, R; cin >> N >> M;
	H = (int)ceil(log2(N));
	tree_size = (1 << (H + 1));
	vector <int> v(N);
	vector <pair<int, int>> tree(tree_size);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(v, tree, 1, 0, N - 1);
	while (M--) {
		cin >> L >> R;
		P = query(tree, 1, 0, N - 1, L - 1, R - 1);
		cout << P.second - P.first << '\n';
	}
	return 0;
}