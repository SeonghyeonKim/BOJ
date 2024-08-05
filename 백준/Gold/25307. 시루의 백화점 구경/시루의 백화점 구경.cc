#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

int board[2000][2000];
int visited[2000][2000];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

struct lo {
	int x, y, t;	
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, K;
	cin >> N >> M >> K;
	
	queue<pii> q;
	queue<lo> tq;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			if(board[i][j] == 4) {
				q.push({i, j});
			}
			else if(board[i][j] == 3) {
				tq.push({i, j, 0});
			}
		}
	}

	while(!tq.empty()) {
		lo cur = tq.front();
		tq.pop();
		
		if(cur.t >= K) break;
		
		for(int i=0; i<4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				if(visited[nx][ny]==0) {
					visited[nx][ny]=1;
					board[nx][ny] = 1;
					tq.push({nx, ny, cur.t+1});
				}
			}
		}
	}
	
	visited[q.front().first][q.front().second]=1;
	while(!q.empty()) {
		pii cur = q.front();
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				if(board[nx][ny] == 2) {
					cout << visited[cur.first][cur.second];
					return 0;
				}	
				else if(board[nx][ny]==0 && visited[nx][ny]==0) {	
					visited[nx][ny] = visited[cur.first][cur.second]+1;
					q.push({nx, ny});
				}
			}
		}
	}
	
	cout << -1;

	return 0;
}