#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dp[101][21];
int check[101][21];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K;
	cin >> N >> K;

	for(int i=1; i<=N; i++) {
		int m;
		cin >> m;
		
		for(int j=0; j<m; j++) {
			int a;
			cin >> a;
			check[i][a] = 1;		
		}
	}
	
	for(int i=0; i<=N; i++) {
		for(int j=1; j<=20; j++) {
			dp[i][j] = 987654321;
		}
	}
	
	check[0][1] = 1;
	dp[0][1] = 0;
	for(int i=0; i<N; i++) {
		for(int j=1; j<=20; j++) {
			if(check[i][j] == 1) {
				if(check[i+1][j] == 1) {
					dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
				}
				if(check[i+1][j+1] == 1) {
					dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
				}
				if(check[i+1][j-1] == 1) {
					dp[i+1][j-1] = min(dp[i+1][j-1], dp[i][j]);
				}
				if(check[i+1][min(20, j*2)] == 1) {
					dp[i+1][min(20, j*2)] = min(dp[i+1][min(20, j*2)], dp[i][j]);
				}
				
				for(int k=1; k<=20; k++) {
					if(check[i+1][k] == 1) {
						dp[i+1][k] = min(dp[i+1][k], dp[i][j]+1);
					}	
				}
			}
		}
	}
	
	int ans = 987654321;
	for(int i=1; i<=20; i++) {
		if(dp[N][i] > K) continue;
		ans = min(ans, dp[N][i]);
	}
	
	if(ans == 987654321) cout << -1;
	else cout << ans;

	return 0;
}