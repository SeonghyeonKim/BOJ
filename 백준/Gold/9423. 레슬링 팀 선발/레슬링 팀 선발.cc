#include <iostream>
#include <cmath>
using namespace std;
 
int sum;
int dp[101][45001];	// dp[i][j]: i번째 선수가 들어왔을때, 무게가 j가 가능한지 여부 
int weight[101];
 
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> weight[i];
		sum += weight[i];
	}
	
	dp[0][0] = 1;
	for(int i=0; i<N; i++) {
		for(int j=N; j>0; j--) {
			for(int k=45000; k>=weight[i]; k--) {
				dp[j][k] |= dp[j-1][k-weight[i]];
			}
		}
	} 
	
	int dis = 987654321;
	int ans = 0;
	for(int i=0; i<=45000; i++) {
		if(dp[N/2][i]) {
			if(dis > abs(i - (sum-i))) {
				dis = abs(i - (sum-i));
				ans = i;
			}
		}
	}
	
	if(ans > sum-ans) ans = sum-ans;
	cout << ans << " " << sum-ans;
	
    return 0;
}
