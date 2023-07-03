#include <iostream>
#include <vector>
#define mod 1000000000
using namespace std;

int stair[101][10][1 << 10];
long long N, ans, number;

int dfs(int digit, int endNum, int visited) {
	number++;
	
	if(stair[digit][endNum][visited]) 
		return stair[digit][endNum][visited];
	if(digit == N) 
		return visited == (1 << 10)-1 ? 1 : 0;
	
	long long cnt = 0;
	if(endNum+1 < 10)
		cnt = (cnt + dfs(digit+1, endNum+1, visited | 1 << (endNum+1)))%mod;
	if(endNum-1 >= 0)
		cnt = (cnt + dfs(digit+1, endNum-1, visited | 1 << (endNum-1)))%mod;
	
	return stair[digit][endNum][visited] = (cnt % mod);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;
	for(int i=1; i<10; i++) {
		ans += dfs(1, i, 1 << i);
		ans %= mod;
	}
	cout << ans;
		
	return 0;
}