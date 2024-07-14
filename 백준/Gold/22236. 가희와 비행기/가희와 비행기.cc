#include <iostream>
using namespace std;

long long dp[4001][4001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long d, m;
	cin >> d >> m;
	
	dp[1][1] = 1;
	for(int i=2; i<d; i++) {
		for(int j=1; j<=i; j++) {
			dp[i][j] = (dp[i][j] + dp[i-1][j-1] + dp[i-1][j+1])%m; 
		}
	}
	cout << dp[d-1][1];
	 
	return 0;
}
