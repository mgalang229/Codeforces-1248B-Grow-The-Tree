#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-increasing order
	sort(a.rbegin(), a.rend());
	long long x = 0;
	long long y = 0;
	// run the loop until the middle position
	for (int i = 0; i < (n % 2 == 0 ? n / 2 : n / 2 + 1); i++) {
		// add the element from the left side to 'x'
		x += a[i];
		// check if the left pointer (index) is NOT equal to the right pointer (index)
		if (i != n - 1 - i) {
			// if yes, then add the value at this position to 'y'
			y += a[n - 1 - i];
		}
	}
	// calculate the sum of the squared coordinates
	cout << x * x + y * y << '\n';
	return 0;
}
