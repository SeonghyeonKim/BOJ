#include <iostream>
using namespace std;

long long dp[11][2001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=1; i<=2000; i++) dp[1][i] = i;
	for(int i=2; i<=10; i++) {
		for(int j=1; j<=2000; j++) {
			dp[i][j] = dp[i][j-1] + dp[i-1][j/2];
		}
	}
	
	int T;
	cin >> T;
	
	while(T--) {
		int n, m;
		cin >> n >> m;
		cout << dp[n][m] << "\n";
	}
	
	return 0;
}