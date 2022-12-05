#include <iostream>
using namespace std;

char board[1001][1001];
int dp[1001][1001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin >> board[i][j];
		}
	}
	
	int ans = 0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(board[i][j]=='1') {
				dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1])+1;
			}
			
			ans = max(ans, dp[i][j]);
		}
	}
	
	cout << ans*ans;
	
	return 0;
}