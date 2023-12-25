#include <iostream>
#include <cmath>
using namespace std;

int tree[262144];

int update(int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) { return tree[node] += value; }
	int mid = (start + end) / 2;
	return tree[node] = update(node * 2, start, mid, index, value) + update(node * 2 + 1, mid + 1, end, index, value);
}

int query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char C; int T, B, P, Q, H, tree_size, L, R; cin >> T;
	while (T--) {
		cin >> B >> P >> Q; P += Q;
		H = (int)ceil(log2(B));
		tree_size = (1 << (H + 1));
		while (P--) {
			cin >> C >> L >> R;
			if (C == 80) { update(1, 0, B - 1, L - 1, R); }
			else {
				cout << query(1, 0, B - 1, L - 1, R - 1) << '\n';
			}
		}
		fill_n(tree, tree_size, 0);
	}
	return 0;
}
/* ■ 설명 ■
[오답 원인]
문제를 제대로 해석하지 않아서 발생한 문제이며
update 때마다, 공의 수를 바꾸는 게 아니라, 더하는 거다.
*/
