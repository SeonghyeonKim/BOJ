#include <iostream>
#include <vector>
using namespace std;

vector<int> v[1000001];
int visited[1000001];
int dp[1000001][2]; 
// dp[][0]: 얼리아답터 아닌 경우 최소 수 
// dp[][1]: 얼리아답터인 경우 최소 수 

void dfs(int cur) {
	visited[cur] = 1;
	dp[cur][1] = 1;
	
	for(int i=0; i<v[cur].size(); i++) {
		int next = v[cur][i];
		
		if(visited[next] == 0) {
			dfs(next);
			
			// 아닌 경우, 친구가 어답터 
			dp[cur][0] += dp[next][1];
			// 맞는 경우, 친구는 상관없음 
			dp[cur][1] += min(dp[next][0], dp[next][1]);
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<N; i++) {
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);
	
	cout << min(dp[1][0], dp[1][1]);	

	return 0;
}