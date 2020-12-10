#include <iostream>
#include <vector>

using namespace std;

/* A hourglass is basically a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i+ 2][j + 2]
 * Must take care of edge cases, if any variation of a[i][j] is undefined. Then it is not a hourglass
 */

vector<vector<int> > make_vector() {
	vector<vector<int> > a(6);
	for (int i = 0; i < 6; i++) {
		a[i].resize(6);
		for (int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}
	return a;
}

void solve() {
	vector<vector<int> > a = make_vector();
	vector<int> s;
	int ms = -(9*9);

	for(int i = 0; i < a.size(); i++) {
		for(int j = 0; j < a[i].size(); j++) {
			if (i + 2 < a.size() && j + 2 < a.size()) {
				int vs = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i+ 2][j + 2];
				s.push_back(vs);
			}
		}
	}

	for(int i = 0; i < s.size(); i++) {
		if (s[i] > ms) {
			ms = s[i];
		}
	}

	cout << ms << endl;
}

int main() {
	solve();
	return 0;
}
