#include <iostream>
#include <vector>
using namespace std;

// dp[n][m] : 1~m 까지의 숫자 중 n개 고르는 경우의 수
long long dp[11][2001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=1; i<=2000; i++) dp[1][i] = i;
	for(int i=2; i<=10; i++) {
		for(int j=1; j<=2000; j++) {
			dp[i][j] = dp[i][j-1] + dp[i-1][j/2];
		}
	}
	
	int T;
	cin >> T;
	
	while(T--) {
		int n, m;
		cin >> n >> m;
		cout << dp[n][m] << "\n";
	}
	
	return 0;
}

/*
1 1 = 1
1 2 = 2
1 3 = 3
1 4 = 4     (1 3) + 1
= (i, j-1) + 1


2 2 = 1  
2 3 = 2
2 4 = 4
2 5 = 6
2 6 = 9  |  (2 5) + (1 3); 
= (i, j-1) + (i-1, j/2);
 
             
3 4 = 1    
3 5 = 2
3 6 = 4
3 7 = 6
3 8 = 10
3 9 = 15 
3 10 = 21  |  (3 9) + (2 5) 
= (i, j-1) + (i-1, j/2)
*/

