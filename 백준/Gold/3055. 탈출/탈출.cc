#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

int R, C;
char board[51][51];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int visited[51][51][2];

int main(void) {
	queue<pii> q, w;
	
	cin >> R >> C;
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin >> board[i][j];
			
			if(board[i][j]=='S') {
				visited[i][j][0] = 1;
				q.push({i, j});				
			}
			
			if(board[i][j]=='*') {
				visited[i][j][1] = 1;
				w.push({i, j});
			}
		}
	}
	
	while(!w.empty()) {
		int cx = w.front().first;
		int cy = w.front().second;
		w.pop();
		
		for(int i=0; i<4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];	
			
			if(nx>=0 && nx<R && ny>=0 && ny<C) {
				if(visited[nx][ny][1]==0 && board[nx][ny]=='.') {
					visited[nx][ny][1] = visited[cx][cy][1]+1;
					w.push({nx, ny});
				}
			}
		}
	}
	
	while(!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];	
			
			if(nx>=0 && nx<R && ny>=0 && ny<C) {
				if(visited[nx][ny][0]==0 && board[nx][ny]!='X' && (visited[cx][cy][0]+1 < visited[nx][ny][1] || visited[nx][ny][1]==0)) {
					if(board[nx][ny]=='D') {
						cout << visited[cx][cy][0];
						return 0;
					}				
					
					visited[nx][ny][0] = visited[cx][cy][0]+1;
					q.push({nx, ny});
				}
			}
		}
	}
	
	cout << "KAKTUS";
	
	return 0;
}