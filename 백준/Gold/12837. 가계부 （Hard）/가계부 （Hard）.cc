#include <iostream>
using namespace std;

long long tree[2097152], P;

long long update(int node, int start, int end, int index, long long value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) { return tree[node] += value; }
	int mid = (start + end) / 2;
	return tree[node] = update(node * 2, start, mid, index, value) + update(node * 2 + 1, mid + 1, end, index, value);
}

long long query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, Q, T, L, R; cin >> N >> Q;
	while (Q--) {
		cin >> T >> L >> R;
		if (T & 1) { update(1, 0, N - 1, L - 1, R); }
		else { cout << query(1, 0, N - 1, L - 1, R - 1) << '\n'; }
	}
	return 0;
}