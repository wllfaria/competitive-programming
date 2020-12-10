#include <iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a[i] = num;
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
}

int main() {
	solve();
	return 0;
}
