#include <iostream>
using namespace std;

int v[100000];
long long tree[262144];

long long init(int node, int start, int end) {
	if (start == end) { return tree[node] = v[start]; }
	int mid = (start + end) / 2;
	return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

long long update(int node, int start, int end, int index, long long value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) {
		v[index] = value;
		return tree[node] = value;
	}
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
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, Q, L, R, In, Val; cin >> N >> Q;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1);
	while (Q--) {
		cin >> L >> R >> In >> Val;
		if (L < R) { cout << query(1, 0, N - 1, L - 1, R - 1) << '\n'; }
		else { cout << query(1, 0, N - 1, R - 1, L - 1) << '\n'; }
		update(1, 0, N - 1, In - 1, Val);

	}
	return 0;
}