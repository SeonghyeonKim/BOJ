#include <iostream>
#include <vector>
using namespace std;

int N, K;
int arr[50001];
int dp[4][50001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;
	
	vector<int> v(N+1);
	for(int i=1; i<=N; i++) cin >> v[i];
	cin >> K;
	
	for(int i=1; i<=N; i++) {
		if(i-K >= 0) arr[i] = arr[i-1] + v[i] - v[i-K];
		else arr[i] = arr[i-1] + v[i];
	}
	
	for(int i=1; i<=3; i++) {
		for(int j=i*K; j<=N; j++) {
			dp[i][j] = max(dp[i][j-1], dp[i-1][j-K] + arr[j]);
		}
	}
	
	cout << dp[3][N];
	
	return 0;
}
