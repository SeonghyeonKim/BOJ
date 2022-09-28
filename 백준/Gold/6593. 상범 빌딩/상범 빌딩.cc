#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int L, R, C;
char board[30][30][30];
int visited[30][30][30];
int dx[] = {0,0,0,0,-1,1};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {1,-1,0,0,0,0};

int sx, sy, sz;

typedef struct {
	int x, y, z, c;
} node;

void bfs(void) {
	queue<node> q;
	q.push({sx, sy, sz, 0});
	visited[sx][sy][sz] = 1;
	
	while(!q.empty()) {
		node c = q.front();
		q.pop();
		
		for(int i=0; i<6; i++) {
			int nx = c.x+dx[i];
			int ny = c.y+dy[i];
			int nz = c.z+dz[i];
				
			if(nx>=0 && ny>=0 && nz>=0 && nx<L && ny<R && nz<C) {
				if(visited[nx][ny][nz]==0) {
					if(board[nx][ny][nz]=='E') {
						cout << "Escaped in " << c.c+1 << " minute(s).\n";
						return ;
					}
					else if(board[nx][ny][nz]=='.') {
						visited[nx][ny][nz] = 1;
						q.push({nx, ny, nz, c.c+1});
					}
				}	
			}
		}
	}
	
	cout << "Trapped!\n";
	return ;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while(1) {
		cin >> L >> R >> C;
		if(L==0) break;	
	
		for(int i=0; i<L; i++) {
			for(int j=0; j<R; j++) {
				for(int k=0; k<C; k++) {
					cin >> board[i][j][k];
					visited[i][j][k] = 0;
					
					if(board[i][j][k]=='S') {
						sx=i;
						sy=j;
						sz=k;
					}
				}		
			}
 		}
		
		bfs();
	}
	
	return 0;
}