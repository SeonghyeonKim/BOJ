#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

typedef struct {
	int x, y, c;
} node;

int board[101][101];
bool visited[101][101];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main(void) {
	int N, M, K;
	cin >> N >> M >> K;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}
	
	
	int check = 987654321;
	queue<node> q;
	visited[0][0] = 1;
	q.push({0,0,0});
	
	while(!q.empty()) {
		node c = q.front();
		q.pop();
		
		if(c.c>=K) break;
		
		for(int i=0; i<4; i++) {
			int nx = c.x+dx[i];
			int ny = c.y+dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				if(visited[nx][ny]==0 && board[nx][ny]!=1) {
					if(board[nx][ny]==2) {
						visited[nx][ny]=1;
						check = c.c+1 + N-1-nx + M-1-ny;
					}
					else if(nx==N-1 && ny==M-1) {
						int ans = min(check, c.c+1);
						cout << ans;
						return 0;
					}
					else {
						visited[nx][ny] = 1;
						q.push({nx, ny, c.c+1});	
					}
				}
			}
		}
	}
	if(check <= K) cout << check;
	else cout << "Fail";
	
	return 0;
}