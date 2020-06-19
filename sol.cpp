#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, x;
	cin >> n >> x;
	char s[1000];
	long long a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> s[i] >> a[i];
	}
	long long sum = x;
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == '+') {
			sum += a[i];
		}
		else {
			if(sum < a[i]) {
				cnt++;
				continue;
			}
			else {
				sum -= a[i];
			}
		}
	}
	cout << sum << " " << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
