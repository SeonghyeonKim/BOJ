#include <iostream>
using namespace std;

int board[101][101];
int dp[101][101];

void check(int x, int y) {
	int cnt = 1;
	for(int i=0; i<=x; i++) {
		for(int j=0; j<=y; j++) {
			if(board[x][y]>board[i][j]) cnt = max(cnt, dp[i][j]+1);
		}
	}
	dp[x][y] = cnt;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> board[i][j];
		}
	}
	
	dp[0][0] = 1;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			check(i, j);
		}
	}
	
	int ans = 0;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			ans = max(ans, dp[i][j]);
		}
	}
	cout << ans;
	
	return 0;
}

