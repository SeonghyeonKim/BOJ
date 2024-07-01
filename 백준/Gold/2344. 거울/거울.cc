#include <iostream>
using namespace std;

int board[1003][1003];
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

int change(int code) {
	switch(code) {
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 2;
	}
}

void dfs(int x, int y, int dir) {
	if(board[x][y]>0) {
		cout << board[x][y] << " ";
		return ;
	}
	
	if(board[x][y] == -1) dir = change(dir);
	
	int nx = x + dx[dir];
	int ny = y + dy[dir];
	
	dfs(nx, ny, dir);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	int idx = 1;
	for(int i=1; i<=N; i++) {
		board[i][0] = idx++;
	}
	for(int i=1; i<=M; i++) {
		board[N+1][i] = idx++;
	}
	for(int i=N; i>=1; i--) {
		board[i][M+1] = idx++;
	}
	for(int i=M; i>=1; i--) {
		board[0][i] = idx++;
	}
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin >> board[i][j];
			if(board[i][j]==1) board[i][j] = -1;
		}
	}
	
	for(int i=1; i<=N; i++) {
		dfs(i, 1, 0);
	}
	for(int i=1; i<=M; i++) {
		dfs(N, i, 1);
	}
	for(int i=N; i>=1; i--) {
		dfs(i, M, 2);
	}
	for(int i=M; i>=1; i--) {
		dfs(1, i, 3);
	}
	
	return 0;
}