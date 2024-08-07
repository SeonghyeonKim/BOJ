#include <iostream>
using namespace std;

int dp[100][10]={0,1,1,1,1,1,1,1,1,1};

int main() {
	int N;
	cin >> N;
	
	for(int i=1; i<N; i++) {
		for(int j=0; j<10; j++) {
			if(j==0) dp[i][0] = dp[i-1][1]%1000000000;
			else if(j==9) dp[i][9] = dp[i-1][8]%1000000000;
			else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%1000000000;
		}
	}
	int step=0;
	for(int i=0; i<10; i++) {
		step=(step+dp[N-1][i])%1000000000;
	}
	cout << step%1000000000;
	
	return 0;
}