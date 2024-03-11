#include <iostream>
#include <string>
using namespace std;

bool isPal[2501][2501];
int dp[2501];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	int si = s.size();
	
	for(int i=0; i<si; i++) isPal[i][i] = 1;
	for(int i=1; i<si; i++) 
		if(s[i]==s[i-1]) isPal[i-1][i] = 1;
	
	for(int len=2; len<si; len++) {
		for(int i=0; len+i<si; i++) {
			if(s[i]==s[i+len] && isPal[i+1][i+len-1]) {
				isPal[i][i+len]=1;
			}
		}		 
	}
	
	for(int i=1; i<=si; i++) dp[i]=987654321;

	for(int i=1; i<=si; i++) {
		for(int j=1; j<=i; j++) {
			if(isPal[j-1][i-1]) {
				dp[i] = min(dp[i], dp[j-1]+1);
			}
		}
	}
	
	cout << dp[si];
	
	return 0;
}
