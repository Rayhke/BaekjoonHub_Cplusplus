#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void init(vector<long long>& v, vector<long long>& tree, int node, int start, int end) {
	if (start == end) { tree[node] = v[start]; }
	else {
		init(v, tree, node * 2, start, (start + end) / 2);
		init(v, tree, node * 2 + 1, (start + end) / 2 + 1, end);
		tree[node] = tree[node * 2] + tree[node * 2 + 1];
	}
}

void update(vector<long long>& v, vector<long long>& tree, int node, int start, int end, int index, long long value) {
	if (index < start || end < index) { return; }
	if (start == end) {
		v[index] = value;
		tree[node] = value;
		return;
	}
	update(v, tree, node * 2, start, (start + end) / 2, index, value);
	update(v, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, value);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	long long Lsum = query(tree, node * 2, start, (start + end) / 2, left, right);
	long long Rsum = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return Lsum + Rsum;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, K, H, tree_size, T, L_index; long long R_value; cin >> N >> M >> K;
	H = (int)ceil(log2(N));
	tree_size = (1 << (H + 1)); M += K;
	vector <long long> v(N);
	vector <long long> tree(tree_size);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(v, tree, 1, 0, N - 1);
	while (M--) {
		cin >> T >> L_index >> R_value;
		if (T == 1) {
			update(v, tree, 1, 0, N - 1, L_index - 1, R_value);
		}
		if (T == 2) {
			cout << query(tree, 1, 0, N - 1, L_index - 1, R_value - 1) << '\n';
		}
	}
	return 0;
}