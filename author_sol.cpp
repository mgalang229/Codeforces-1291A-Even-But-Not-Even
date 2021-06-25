#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		int odd = 0;
		for (char c : s) {
			if ((c - '0') & 1) {
				// count the frequency of odd digits
				odd++;
			}
		}
		// check if the frequency of odd digits is less than or equal to 1
		if (odd <= 1) {
			// if yes, then print -1 and continue the test cases
			cout << "-1\n";
			continue;
		}
		// otherwise, we need to print two odd digits (which will produce an even sum)
		int cnt = 0;
		for (char c : s) {
			// check if the current character is an odd digit
			if ((c - '0') & 1) {
				// if yes, then print the the character (digit)
				cout << c;
				// increment 'cnt'
				cnt++;
			}
			if (cnt == 2) {
				// if 'cnt' is equal to two, then break the loop because 
				// the conditions are already satisfied
				break;
			}
		}
		cout << '\n';
	}
	return 0;
}
