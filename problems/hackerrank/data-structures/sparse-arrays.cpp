#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, qs;
	cin >> n;
	vector<string> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	cin >> qs;

	vector<string> q(qs);
	vector<int> s(qs);

	for (int i = 0; i < qs; i++) {
		cin >> q[i];
	}

	for (int i = 0; i < q.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == q[i]) {
				s[i] = s[i] + 1;
			}
		}
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}
}

int main() {
	solve();
	return 0;
}
