#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void init(vector<int>& v, vector<int>& tree, int node, int start, int end) {		// 핵심 부분 (어떻게 구조를 만드냐에 따라 다양한 문제에 대응함)
	if (start == end) { tree[node] = v[start]; }
	else {
		init(v, tree, node * 2, start, (start + end) / 2);
		init(v, tree, node * 2 + 1, (start + end) / 2 + 1, end);
		tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
	}
}

int query(vector<int>& tree, int node, int start, int end, int left, int right) {	// 마찬가지로 어떻게 탐색 하느냐에 따라, 다양한 대응이 가능하다.
	if (right < start || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int Lmin = query(tree, node * 2, start, (start + end) / 2, left, right);
	int Rmin = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	if (Lmin == 0) { return Rmin; }
	else if (Rmin == 0) { return Lmin; }
	else { return min(Lmin, Rmin); }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, H, tree_size, L, R; cin >> N >> M;
	H = (int)ceil(log2(N));				// [중요]
	tree_size = (1 << (H + 1));			// [중요]
	vector <int> v(N);
	vector <int> tree(tree_size);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(v, tree, 1, 0, N - 1);
	while (M--) {
		cin >> L >> R;
		cout << query(tree, 1, 0, N - 1, L - 1, R - 1) << '\n';
	}
	return 0;
}
/* ■ 설명 ■
세그먼트 트리 (추가 설명 적을 것)
*/
