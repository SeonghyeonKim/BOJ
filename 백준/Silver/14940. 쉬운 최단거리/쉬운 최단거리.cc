#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
using namespace std;

int R, C;
int x, y;
int board[1001][1001];
int visited[1001][1001];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> R >> C;
	
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin >> board[i][j];	
			
			if(board[i][j]==2) {
				x = i;
				y = j;
			}	
		}
	}
	
	queue<pii> q;	
	visited[x][y] = 1;
	q.push({x, y});
	
	while(!q.empty()) {
		pii c = q.front();
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = c.first + dx[i];
			int ny = c.second + dy[i];
			
			if(nx>=0 && nx<R && ny>=0 && ny<C && visited[nx][ny]==0 && board[nx][ny]==1) {
				visited[nx][ny]=visited[c.first][c.second]+1;
				q.push({nx, ny});
			}	
		}
	}
	
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			if(visited[i][j]==0 && board[i][j]==1) cout << -1 << " ";
			else if(visited[i][j]==0) cout << 0 << " ";
			else cout << visited[i][j]-1 << " ";
		}
		cout << "\n";
	}

	return 0;
}
