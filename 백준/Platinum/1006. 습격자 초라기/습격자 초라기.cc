#include <iostream>
using namespace std;

int arr[10002][2];
int dp[10002][5];

int min(int a, int b, int c, int d, int e) {
	return min(min(min(min(a, b), c), d), e);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int N, K;
		cin >> N >> K;
		
		for(int k=0; k<2; k++) {
			for(int i=1; i<=N; i++) {
				cin >> arr[i][k];
			}	
		}
		
		// 1 ~ N 일반. 
		dp[1][0] = 2;
		if(arr[1][0]+arr[1][1] <= K) dp[1][1] = 1;
		else dp[1][1] = 987654321;
		dp[1][2] = 987654321;
		dp[1][3] = 987654321;
		dp[1][4] = 987654321;
		
		for(int i=2; i<=N; i++) {
			dp[i][0] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 2;
			
			if(arr[i][0] + arr[i][1] <= K) 
				dp[i][1] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 1;
			else dp[i][1] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K) 
				dp[i][2] = min(dp[i-1][0], dp[i-1][3]) + 1;
			else dp[i][2] = 987654321;
			
			if(arr[i][1] + arr[i-1][1] <= K) 
				dp[i][3] = min(dp[i-1][0], dp[i-1][2]) + 1;
			else dp[i][3] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K && arr[i][1] + arr[i-1][1] <= K)
				dp[i][4] = dp[i-1][0];
			else dp[i][4] = 987654321;
		}
		
		int ans = min(dp[N][0], dp[N][1], dp[N][2], dp[N][3], dp[N][4]);
		if(N==1 || N==2) {
			cout << ans << "\n";
			continue;
		}
		
		// 2 ~ N-1 일반; 
		dp[2][0] = 4;
		if(arr[2][0]+arr[2][1] <= K) dp[2][1] = 3;
		else dp[2][1] = 987654321;
		dp[2][2] = 987654321;
		dp[2][3] = 987654321;
		dp[2][4] = 987654321;
		
		for(int i=3; i<N; i++) {
			dp[i][0] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 2;
			
			if(arr[i][0] + arr[i][1] <= K) 
				dp[i][1] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 1;
			else dp[i][1] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K) 
				dp[i][2] = min(dp[i-1][0], dp[i-1][3]) + 1;
			else dp[i][2] = 987654321;
			
			if(arr[i][1] + arr[i-1][1] <= K) 
				dp[i][3] = min(dp[i-1][0], dp[i-1][2]) + 1;
			else dp[i][3] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K && arr[i][1] + arr[i-1][1] <= K)
				dp[i][4] = dp[i-1][0];
			else dp[i][4] = 987654321;
		}
		
		int tmp =  min(dp[N-1][0], dp[N-1][1], dp[N-1][2], dp[N-1][3], dp[N-1][4]);
		
		if(arr[N][0] + arr[1][0] <= K) 	
			ans = min(ans, tmp+1);
		if(arr[N][1] + arr[1][1] <= K)
			ans = min(ans, tmp+1);
		if(arr[N][0] + arr[1][0] <= K && arr[N][1] + arr[1][1] <= K)
			ans = min(ans, tmp);
		
		
		// 1 ~ N 위.
		int f1 = arr[1][0];
		int f2 = arr[N][0];
		arr[1][0] = 987654321;
		arr[N][0] = 987654321;
		
		dp[1][0] = 2;
		if(arr[1][0]+arr[1][1] <= K) dp[1][1] = 1;
		else dp[1][1] = 987654321;
		dp[1][2] = 987654321;
		dp[1][3] = 987654321;
		dp[1][4] = 987654321;
		
		for(int i=2; i<=N; i++) {
			dp[i][0] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 2;
			
			if(arr[i][0] + arr[i][1] <= K) 
				dp[i][1] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 1;
			else dp[i][1] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K) 
				dp[i][2] = min(dp[i-1][0], dp[i-1][3]) + 1;
			else dp[i][2] = 987654321;
			
			if(arr[i][1] + arr[i-1][1] <= K) 
				dp[i][3] = min(dp[i-1][0], dp[i-1][2]) + 1;
			else dp[i][3] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K && arr[i][1] + arr[i-1][1] <= K)
				dp[i][4] = dp[i-1][0];
			else dp[i][4] = 987654321;
		}
		
		tmp =  min(dp[N][0], dp[N][1], dp[N][2], dp[N][3], dp[N][4]);
		
		if(f1 + f2 <= K)
			ans = min(ans, tmp-1);
			
		arr[1][0] = f1;
		arr[N][0] = f2;
		
		// 1 ~ N 아래 		
		f1 = arr[1][1];
		f2 = arr[N][1];
		arr[1][1] = 987654321;
		arr[N][1] = 987654321;
		
		dp[1][0] = 2;
		if(arr[1][0]+arr[1][1] <= K) dp[1][1] = 1;
		else dp[1][1] = 987654321;
		dp[1][2] = 987654321;
		dp[1][3] = 987654321;
		dp[1][4] = 987654321;
		
		for(int i=2; i<=N; i++) {
			dp[i][0] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 2;
			
			if(arr[i][0] + arr[i][1] <= K) 
				dp[i][1] = min(dp[i-1][0], dp[i-1][1], dp[i-1][2], dp[i-1][3], dp[i-1][4]) + 1;
			else dp[i][1] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K) 
				dp[i][2] = min(dp[i-1][0], dp[i-1][3]) + 1;
			else dp[i][2] = 987654321;
			
			if(arr[i][1] + arr[i-1][1] <= K) 
				dp[i][3] = min(dp[i-1][0], dp[i-1][2]) + 1;
			else dp[i][3] = 987654321;
			
			if(arr[i][0] + arr[i-1][0] <= K && arr[i][1] + arr[i-1][1] <= K)
				dp[i][4] = dp[i-1][0];
			else dp[i][4] = 987654321;
		}
		
		tmp =  min(dp[N][0], dp[N][1], dp[N][2], dp[N][3], dp[N][4]);
		
		if(f1 + f2 <= K)
			ans = min(ans, tmp-1);
			
		arr[1][0] = f1;
		arr[N][0] = f2;
		
		cout << ans << "\n";
	}
	
	return 0;
}
