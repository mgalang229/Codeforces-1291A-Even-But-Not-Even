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
		int sum = 0;
		string ebne = "";
		for (int i = 0; i < n; i++) {
			// calculate the current sum by converting the characters in its numerical equivalent
			sum += (s[i] - '0');
			// concatenate the current characters in the 'ebne' string
			ebne += s[i];
			// check if the current sum is even and the last character (digit) of 'ebne' string 
			// is ODD which means that the whole number is odd (based on divisibility rule of 2)
			if ((sum % 2 == 0) && (s[i] & 1)) {
				// if yes: break the loop
				break;
			}
		}
		// output YES if: the last character (digit) is ODD and the sum is even
		cout << ((ebne[(int) ebne.size() - 1] & 1) && (sum % 2 == 0) ? ebne : "-1") << '\n';
	}
	return 0;
}
