#include <iostream>
#include <vector>
using namespace std;

long long dp[203][203][3];
long long v[2][203];

long long max(long long a, long long b) {
	if (a > b) return a;
	return b;
} 

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> v[0][i] >> v[1][i];
	}

	dp[1][0][0] = v[0][1] + v[1][1];
	dp[1][1][1] = v[1][1];
	dp[1][1][2] = v[0][1];

	for (int i = 2; i <=N; i++) {
		for (int j = 0; j <= K; j++) {
			if (j >= 1) {
				dp[i][j][1] = max(dp[i - 1][j - 1][0], dp[i - 1][j - 1][1]) + v[1][i];
				dp[i][j][2] = max(dp[i - 1][j - 1][0], dp[i - 1][j - 1][2]) + v[0][i];
			}
			if(i!=j) dp[i][j][0] = max(max(dp[i-1][j][1], dp[i-1][j][2]), dp[i-1][j][0]) + v[0][i] + v[1][i];
		} 
	}
	cout << max(max(dp[N][K][0], dp[N][K][1]), dp[N][K][2]);

	return 0;
}