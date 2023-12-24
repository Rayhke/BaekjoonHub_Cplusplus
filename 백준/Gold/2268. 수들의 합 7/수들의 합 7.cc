#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void update(vector<long long>& v, vector<long long>& tree, int node, int start, int end, int index, long long value) {
	if (index < start || end < index) { return; }
	if (start == end) {
		v[index] = value;
		tree[node] = value;
		return;
	}
	int mid = (start + end) / 2;
	update(v, tree, node * 2, start, mid, index, value);
	update(v, tree, node * 2 + 1, mid + 1, end, index, value);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	long long Lsum = query(tree, node * 2, start, mid, left, right);
	long long Rsum = query(tree, node * 2 + 1, mid + 1, end, left, right);
	return Lsum + Rsum;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, H, tree_size, T, L_index, R_value, a, b; cin >> N >> M;
	H = (int)ceil(log2(N));
	tree_size = (1 << (H + 1));
	vector <long long> v(N, 0), tree(tree_size, 0);
	while (M--) {
		cin >> T >> L_index >> R_value;
		if (T & 1) { update(v, tree, 1, 0, N - 1, L_index - 1, R_value); }
		else {
			a = min(L_index, R_value); b = max(L_index, R_value);
			cout << query(tree, 1, 0, N - 1, a - 1, b - 1) << '\n';
		}
	}
	return 0;
}