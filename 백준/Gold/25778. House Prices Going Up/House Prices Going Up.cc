#include <iostream>
using namespace std;

int v[500000];
long long tree[1048576];

long long init(int node, int start, int end) {
	if (start == end) { return tree[node] = v[start]; }
	int mid = (start + end) / 2;
	return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

long long update(int node, int start, int end, int index, long long value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) {
		v[index] += value;
		return tree[node] += value;
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
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char C; int N, T, L, R; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1); cin >> T;
	while (T--) {
		cin >> C >> L >> R;
		if (C == 85) { update(1, 0, N - 1, L - 1, R); }
		else { cout << query(1, 0, N - 1, L - 1, R - 1) << '\n'; }
	}
	return 0;
}