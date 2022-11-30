#include <iostream>
#define INF 987654321
using namespace std;

int abs(int a) {
	if(a<0) return -a;
	return a;
}

int move_foot(int from, int to) {
	if(from==0) return 2;
	else if(from==to) return 1;
	else {
		if(abs(to-from)%2) return 3;
		return 4;
	}
}

int dp[100001][5][5];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, t=1;
	cin >> a;
	
	if(a==0) {
		cout << 0;
		return 0;
	}
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			dp[1][i][j] = INF;
		}
	}
	
	dp[1][a][0] = 2;
	dp[1][0][a] = 2;
	
	while(t++) {
		cin >> a;
		if(a==0) break;
		
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				dp[t][i][j] = INF;
			}
		}
		
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				dp[t][a][j] = min(dp[t][a][j], dp[t-1][i][j] + move_foot(i, a));
				dp[t][i][a] = min(dp[t][i][a], dp[t-1][i][j] + move_foot(j, a));
			}
		}
	}
	t--;

	int ans=INF;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(dp[t][i][j]) ans = min(ans, dp[t][i][j]);
		}
	}
	
	cout << ans;
	
	return 0;
}
