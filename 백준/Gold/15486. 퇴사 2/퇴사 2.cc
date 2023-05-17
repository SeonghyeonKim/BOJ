#include <iostream>
using namespace std;

int T[1500002], P[1500002];
int dp[1500002];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		cin >> T[i] >> P[i];
	}
	
	for(int i=1; i<=N; i++) {
		dp[i] = max(dp[i], dp[i-1]);
		if(i+T[i]-1 > N) continue;
		
		dp[i+T[i]-1] = max(dp[i+T[i]-1], dp[i-1]+P[i]);
	}

	cout << dp[N];	
 	
	return 0;
}



