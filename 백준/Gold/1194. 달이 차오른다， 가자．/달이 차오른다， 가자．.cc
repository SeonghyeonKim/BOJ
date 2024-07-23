#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

char board[51][51];
int visited[51][51][1 << 6];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

struct lo {
	int x, y, k;	
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	
	queue<lo> q;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
	
			if(board[i][j]=='0') {
				board[i][j] = '.';
				visited[i][j][0] = 1;
				q.push({i, j, 0});		
			}
		}
	}
	
	while(!q.empty()) {
		lo cur = q.front();
		q.pop();
				
		for(int i=0; i<4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];	
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				// 출구 도착
				if(board[nx][ny] == '1') {
					cout << visited[cur.x][cur.y][cur.k];
					return 0; 
				} 
				// 없음 
				else if(board[nx][ny] == '.') {
					if(visited[nx][ny][cur.k]==0) {
						visited[nx][ny][cur.k] = visited[cur.x][cur.y][cur.k]+1;
						q.push({nx, ny, cur.k});	
					}
				}
				// 열쇠 
				else if(board[nx][ny]>='a' && board[nx][ny]<='f') {
					int tmp = board[nx][ny]-'a';
					// 열쇠를 가진 경우
					if(cur.k & (1 << tmp)) {
						if(visited[nx][ny][cur.k]==0) {
							visited[nx][ny][cur.k] = visited[cur.x][cur.y][cur.k]+1;
							q.push({nx, ny, cur.k});
						}
					}
					// 열쇠가 없는 경우
					else {
						int nk = cur.k | (1 << tmp);
						visited[nx][ny][nk] = visited[cur.x][cur.y][cur.k]+1;
						q.push({nx, ny, nk});
					}
				}
				// 문
				else if(board[nx][ny]>='A' && board[nx][ny]<='F') {
					int tmp = board[nx][ny]-'a';
					// 열쇠가 있는 경우 
					if(cur.k & (1 << tmp)) {
						if(visited[nx][ny][cur.k]==0) {
							visited[nx][ny][cur.k] = visited[cur.x][cur.y][cur.k]+1;
							q.push({nx, ny, cur.k});
						}
					} 
				} 
			}
		}
	}
	
	cout << -1;	
	
	return 0;
}
