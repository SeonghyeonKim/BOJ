#include <iostream>
#include <string>
using namespace std;

int dp[3001][2];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int N = s.size();
	s = " " + s;
	dp[0][1] = 987654321;
	for(int i=1; i<=N; i++) {
		if(s[i]>='a' && s[i]<='z') {
			dp[i][0] = min(dp[i-1][0]+1, dp[i-1][1]+2);
			dp[i][1] = min(dp[i-1][0]+2, dp[i-1][1]+2); 
		}
		else {
			dp[i][0] = min(dp[i-1][0]+2, dp[i-1][1]+2);
			dp[i][1] = min(dp[i-1][0]+2, dp[i-1][1]+1);
		} 
	}
	
	cout << min(dp[N][0], dp[N][1]);
	
    return 0;
}
