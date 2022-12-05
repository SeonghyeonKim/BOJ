#include <iostream>
using namespace std;

long long dp[101][101][101];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, L, R;
	cin >> N >> L >> R;
	
	dp[1][1][1] = 1;
	dp[2][2][1] = 1;
	dp[2][1][2] = 1;
	dp[3][3][1] = 1;
	dp[3][2][2] = 2;
	dp[3][2][1] = 1;
	dp[3][1][2] = 1;
	dp[3][1][3] = 1;
	
	for(int i=4; i<=N; i++) {
		for(int j=1; j<=L; j++) {
			for(int k=1; k<=R; k++) {
				dp[i][j][k] = (dp[i-1][j-1][k] + dp[i-1][j][k-1] + dp[i-1][j][k]*(i-2)) % 1000000007;
			}
		}
	}
	
	cout << dp[N][L][R];
	
	return 0;
}