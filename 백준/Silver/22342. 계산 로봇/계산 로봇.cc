#include <iostream>
using namespace std;

int board[2003][2003];
int dp[2003][2003];
int M, N;

int main(void) {
	// cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
	
	scanf("%d %d", &M, &N);
	for(int i=1; i<=M; i++) {
		for(int j=1; j<=N; j++) {
			scanf("%1d", &board[i][j]);
		}
	}
	
	int ans = 0;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			dp[j][i] = max(max(dp[j-1][i-1], dp[j][i-1]), dp[j+1][i-1]);
			
			ans = max(ans, dp[j][i]);
			dp[j][i] += board[j][i];
		}
	}
	cout << ans;
	
    return 0;
}