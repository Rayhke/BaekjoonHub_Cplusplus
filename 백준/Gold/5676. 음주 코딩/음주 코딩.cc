#include <iostream>
#include <cmath>
using namespace std;

int v[100000], tree[262144];

int init(int node, int start, int end) {
	if (start == end) { return tree[node] = v[start]; }
	int mid = (start + end) / 2;
	return tree[node] = init(node * 2, start, mid) * init(node * 2 + 1, mid + 1, end);
}

int update(int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) { return tree[node] = value; }
	int mid = (start + end) / 2;
	return tree[node] = update(node * 2, start, mid, index, value) * update(node * 2 + 1, mid + 1, end, index, value);
}

int query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 1; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	return query(node * 2, start, mid, left, right) * query(node * 2 + 1, mid + 1, end, left, right);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char C; int N, K, H, tree_size, L, R, P; string S;
	while (cin >> N >> K) {
		H = (int)ceil(log2(N)); tree_size = (1 << (H + 1));
		for (int n = 0; n < N; n++) {
			cin >> P;
			if (P > 0) { v[n] = 1; }
			else if (P == 0) { v[n] = 0; }
			else { v[n] = -1; }
		}
		init(1, 0, N - 1);
		while (K--) {
			cin >> C >> L >> R;
			if (C == 67) {
				if (R > 0) { R = 1; }
				else if (R == 0) { R = 0; }
				else { R = -1; }
				update(1, 0, N - 1, L - 1, R);
			}
			else {
				P = query(1, 0, N - 1, L - 1, R - 1);
				if (P > 0) { S += '+'; }
				else if (P == 0) { S += '0'; }
				else { S += '-'; }
			}
		}
		cout << S << '\n'; S = "";
		fill_n(v, N, 0); fill_n(tree, tree_size, 0);
	}
	return 0;
}