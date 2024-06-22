#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

char board[153][153];
int visited[153][153];
int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int X, Y, sx, sy;
	cin >> Y >> X;
	
	for(int i=1; i<=X; i++) {
		for(int j=1; j<=Y; j++) {
			cin >> board[i][j];
			
			if(board[i][j]=='K') {
				sx = i;
				sy = j;
			}
		}
	}
	
	visited[sx][sy] = 1;
	queue<pii> q;
	q.push({sx, sy});
	while(!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		
		for(int i=0; i<8; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];
			
			if(nx>0 && nx<=X && ny>0 && ny<=Y) {
				if(board[nx][ny]=='H') {
					cout << visited[cx][cy];
					return 0;
				}
				else if(board[nx][ny]=='.' && visited[nx][ny]==0) {
					visited[nx][ny] = visited[cx][cy]+1;
					q.push({nx, ny});
				}
			}	
		}
	}
	
	return 0;
}
