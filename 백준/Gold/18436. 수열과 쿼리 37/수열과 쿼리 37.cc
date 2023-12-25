#include <iostream>
#define PAIR pair<int, int>
using namespace std;

bool odd, even;
int v[100000];
PAIR tree[262144], P;

void init(int node, int start, int end) {
	if (start == end) {
		odd = 0, even = 0;
		(v[start] & 1) ? odd = 1 : even = 1;
		tree[node] = { odd,even };
		return;
	}
	int mid = (start + end) / 2;
	init(node * 2, start, mid);
	init(node * 2 + 1, mid + 1, end);
	tree[node].first = tree[node * 2].first + tree[node * 2 + 1].first;
	tree[node].second = tree[node * 2].second + tree[node * 2 + 1].second;
}

void update(int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return; }
	if (start == end) {
		odd = 0, even = 0;
		v[index] = value;
		(v[start] & 1) ? odd = 1 : even = 1;
		tree[node] = { odd,even };
		return;
	}
	int mid = (start + end) / 2;
	update(node * 2, start, mid, index, value);
	update(node * 2 + 1, mid + 1, end, index, value);
	tree[node].first = tree[node * 2].first + tree[node * 2 + 1].first;
	tree[node].second = tree[node * 2].second + tree[node * 2 + 1].second;
}

int query(int node, int start, int end, int left, int right, bool mode) {
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) {
		if (mode) { return tree[node].first; }
		else { return tree[node].second; }
	}
	int mid = (start + end) / 2;
	return query(node * 2, start, mid, left, right, mode) + query(node * 2 + 1, mid + 1, end, left, right, mode);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, T, L, R; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1); cin >> M;
	while (M--) {
		cin >> T >> L >> R;
		if (T == 1) { update(1, 0, N - 1, L - 1, R); }
		else {
			cout << query(1, 0, N - 1, L - 1, R - 1, (T & 1)) << '\n';
		}
	}
	return 0;
}