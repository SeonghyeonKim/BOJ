#include <iostream>
using namespace std;

int dp[50001];

int min(int a, int b) {
	return a<b ? a:b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	
	for(int i=1; i<224; i++) dp[i*i]=1;
	for(int i=2; i<=n; i++) {
		int temp=987654321;
		for(int j=1; j*j<=i; j++) temp = min(temp, dp[i-j*j]);
		dp[i] = temp+1;
	}
	
	cout << dp[n];
	
	return 0;
}