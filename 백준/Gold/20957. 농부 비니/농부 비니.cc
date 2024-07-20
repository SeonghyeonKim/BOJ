#include <iostream>
#include <queue>
#define pii pair<int, int>
#define mod 1000000007
using namespace std;

int dp[10001][2][7];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	dp[1][1][0] = 1;
	for(int i=1; i<=9; i++) 
		if(i!=7) dp[1][0][i%7]++;
	
	for(int i=1; i<10000; i++) {
		for(int j=0; j<2; j++) {
			for(int k=0; k<7; k++) {
				for(int l=0; l<10; l++) {
					if(l==0 || l==7) dp[i+1][1][k] = (dp[i+1][1][k] + dp[i][j][k]) % mod;
					else dp[i+1][j][(k+l)%7] = (dp[i+1][j][(k+l)%7] + dp[i][j][k]) % mod;
				}
			}
		}		
	}
	
	while(T--) {
		int N;
		cin >> N;
		
		cout << dp[N][1][0] << "\n";
	}

	return 0;
}