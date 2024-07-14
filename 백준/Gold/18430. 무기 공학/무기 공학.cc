#include <iostream>
#include <string>
using namespace std;

int visited[5][5];
int board[5][5];
int ans=0;
int N, M;

void dfs(int x, int y, int sum) {
	if(x==N) {
		ans = max(ans, sum);
		return ;	
	}
	
	// 1번
	if(x+1<N && y-1>=0) {
		if(visited[x][y]==0 && visited[x+1][y]==0 && visited[x][y-1]==0) {
			visited[x][y]=1;
			visited[x+1][y]=1;
			visited[x][y-1]=1;
			
			int tmp = sum+2*board[x][y]+board[x+1][y]+board[x][y-1];
			if(y+1!=M) dfs(x, y+1, tmp);
			else dfs(x+1, 0, tmp);
			
			visited[x][y]=0;
			visited[x+1][y]=0;
			visited[x][y-1]=0;
		}	
	}
	
	// 2번
	if(x-1>=0 && y-1>=0) {
		if(visited[x][y]==0 && visited[x-1][y]==0 && visited[x][y-1]==0) {
			visited[x][y]=1;
			visited[x-1][y]=1;
			visited[x][y-1]=1;
			
			int tmp = sum+2*board[x][y]+board[x-1][y]+board[x][y-1];
			if(y+1!=M) dfs(x, y+1, tmp);
			else dfs(x+1, 0, tmp);
			
			visited[x][y]=0;
			visited[x-1][y]=0;
			visited[x][y-1]=0;
		}	
	}
	
	// 3번
	if(x-1>=0 && y+1<M) {
		if(visited[x][y]==0 && visited[x-1][y]==0 && visited[x][y+1]==0) {
			visited[x][y]=1;
			visited[x-1][y]=1;
			visited[x][y+1]=1;
			
			int tmp = sum+2*board[x][y]+board[x-1][y]+board[x][y+1];
			if(y+1!=M) dfs(x, y+1, tmp);
			else dfs(x+1, 0, tmp);
			
			visited[x][y]=0;
			visited[x-1][y]=0;
			visited[x][y+1]=0;
		}	
	}
	
	// 4번 
	if(x+1<N && y+1<M) {
		if(visited[x][y]==0 && visited[x+1][y]==0 && visited[x][y+1]==0) {
			visited[x][y]=1;
			visited[x+1][y]=1;
			visited[x][y+1]=1;
			
			int tmp = sum+2*board[x][y]+board[x+1][y]+board[x][y+1];
			if(y+1!=M) dfs(x, y+1, tmp);
			else dfs(x+1, 0, tmp);
			
			visited[x][y]=0;
			visited[x+1][y]=0;
			visited[x][y+1]=0;
		}	
	}
	
	// 넘어가기 
	if(y+1!=M) dfs(x, y+1, sum);
	else dfs(x+1, 0, sum);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}
	
	dfs(0, 0, 0);
	
	cout << ans;
	 
	return 0;
}


