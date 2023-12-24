#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void init(vector<long long>& v, vector<long long>& tree, int node, int start, int end) {
	if (start == end) { tree[node] = v[start]; }
	else {
		int mid = (start + end) / 2;
		init(v, tree, node * 2, start, mid);
		init(v, tree, node * 2 + 1, mid + 1, end);
		tree[node] = tree[node * 2] * tree[node * 2 + 1] % 1000000007;
	}
}

void update(vector<long long>&v,vector<long long>&tree,int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return; }
	if (start == end) {
		v[index] = value;
		tree[node] = value;
		return;
	}
	int mid = (start + end) / 2;
	update(v, tree, node * 2, start, mid, index, value);
	update(v, tree, node * 2 + 1, mid + 1, end, index, value);
	tree[node] = tree[node * 2] * tree[node * 2 + 1] % 1000000007;
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 1; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	long long Lmul = query(tree, node * 2, start, mid, left, right);
	long long Rmul = query(tree, node * 2 + 1, mid + 1, end, left, right);
	return Lmul * Rmul % 1000000007;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, K, H, tree_size, T, L_index, R_value; cin >> N >> M >> K;
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