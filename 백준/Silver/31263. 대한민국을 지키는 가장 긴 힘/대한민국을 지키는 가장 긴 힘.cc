#include <iostream>
#include <string>
using namespace std;

int dp[5001];

int check(string s) {
	if (s[0] == '0') return 0;

	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		sum = sum * 10 + (int)(s[i] - '0');
	}
	if (sum <= 641 && sum>=1) return 1;
	return 0;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	string s;
	cin >> N >> s;

	for (int i = 1; i <= N; i++) dp[i] = 987654321;

	s = " " + s;

	for (int i = 1; i <= N; i++) {
		if (i+2<=N && check(s.substr(i, 3))) {
			dp[i + 2] = min(dp[i+2], dp[i-1]+1);
		}
		if (i+1<=N && check(s.substr(i, 2))) {
			dp[i + 1] = min(dp[i+1], dp[i-1]+1);
		}
		if (check(s.substr(i, 1))) {
			dp[i] = min(dp[i], dp[i-1]+1);
		}
	}
	cout << dp[N];
		 
	return 0;
}
