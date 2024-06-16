#include <iostream>
#include <vector>
using namespace std;

int dp[10][10] = {
	{0,4,3,3,4,3,2,3,1,2},
	{4,0,5,3,2,5,6,1,5,4},
	{3,5,0,2,5,4,3,4,2,3},
	{3,3,2,0,3,2,3,2,2,1},
	{4,2,5,3,0,3,4,3,3,2},
	{3,5,4,2,3,0,1,4,2,1},
	{2,6,3,3,4,1,0,5,1,2},
	{3,1,4,2,3,4,5,0,4,3},
	{1,5,2,2,3,2,1,4,0,1},
	{2,4,3,1,2,1,2,3,1,0}
};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K, P, X;
	cin >> N >> K >> P >> X;
	
	int ans = 0;
	for(int i=1; i<=N; i++) {
		if(i==X) continue;
		
		int cnt=0, init1=i, init2=X;
		for(int t=0; t<K; t++) {
			int tmp1 = init1%10;
			int tmp2 = init2%10;
			
			cnt += dp[tmp2][tmp1];
			
			init1/=10;
			init2/=10;
		}
		
		if(cnt<=P) ans++;
	}
	cout << ans;
	
	return 0;
}