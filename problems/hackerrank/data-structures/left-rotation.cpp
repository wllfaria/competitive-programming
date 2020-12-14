#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, d;
	cin >> n >> d;
	vector<int> v(n), t(d);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < d; i++) {
		t[i] = v[i];
	}

	for (int i = d; i < v.size(); i++) {
		v[i - d] = v[i];
	}

	int index = v.size() - d;

	for (int i = 0; i < t.size(); i++) {
		v[index] = t[i];
		index++;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

int main() {
	solve();
	return 0;
}
