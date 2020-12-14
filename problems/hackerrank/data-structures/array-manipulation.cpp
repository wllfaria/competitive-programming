// This is a problem solved correctly but with wrong time complexity.
// This runs on O(n * m) which is too high to pass the time limits defined
// on the problem.
// By the time i'm writing this, i was unable to find another solution that
// would be accepted by time limits.

#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, m, h = 0;
	cin >> n >> m;
	vector<vector<int> > q(m);
	vector<int> s(n);
	
	for (int i = 0; i < m; i++) {
		q[i].resize(3);
		cin >> q[i][0] >> q[i][1] >> q[i][2];
	}

	for (int i = 0; i < q.size(); i++) {
		int index_a = q[i][0] - 1;
		int index_b = q[i][1];
		int value = q[i][2];
		for (int j = index_a; j < index_b; j++) {
			s[j] = s[j] + value;
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (s[i] > h) {
			h = s[i];
		}
	}

	cout << h << endl;
}

int main() {
	solve();
	return 0;
}
