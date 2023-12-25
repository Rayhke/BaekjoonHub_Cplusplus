#include <iostream>
using namespace std;

int v[100000], tree[262144], Min;

void init(int node, int start, int end) {
	if (start == end) { tree[node] = v[start]; return; }
	int mid = (start + end) / 2;
	init(node * 2, start, mid);
	init(node * 2 + 1, mid + 1, end);
	tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

void update(int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return; }
	if (start == end) {
		v[index] = value;
		tree[node] = value;
		return;
	}
	int mid = (start + end) / 2;
	update(node * 2, start, mid, index, value);
	update(node * 2 + 1, mid + 1, end, index, value);
	tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

int query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	int Lmin = query(node * 2, start, mid, left, right);
	int Rmin = query(node * 2 + 1, mid + 1, end, left, right);
	if (Lmin == 0 || Rmin == 0) { Min = max(Lmin, Rmin); }
	else { Min = min(Lmin, Rmin); }
	return Min;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, T, L, R; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1);
	cin >> M;
	while (M--) {
		cin >> T >> L >> R;
		if (T & 1) {
			update(1, 0, N - 1, L - 1, R);
		}
		else {
			cout << query(1, 0, N - 1, L - 1, R - 1) << '\n';
		}
	}
	return 0;
}