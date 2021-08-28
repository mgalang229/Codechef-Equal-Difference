#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		map<int, int> m;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			// Count the frequency of each element.
			m[x]++;
		}
		int ans = n;
		for (auto [element, frequency] : m) {
			// Find the minimum value of the difference between 'n' and every frequency of an element.
			ans = min(ans, n - frequency);
		}
		// If 'n' is less than or equal to 2, then there is nothing to do (0-deletion).
		// Otherwise, choose the the minimum value between 'ans' and ('n' - 2).
		// The ('n' - 2) case is wherein all the numbers are unique from each other
		// so we need to keep 2 elements and remove the remaining ('n' - 2) elements.
		cout << (n <= 2 ? 0 : min(ans, n - 2)) << '\n';
	}
	return 0;
}
