#include <iostream>
#include <queue>
using namespace std;

int N, M;
int board[101][101];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int visited[101][101];

void check_out() {
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			visited[i][j]=0;
		}
	}
	
	queue<pair<int, int> > q;
	 
	for(int i=0; i<N; i++) {
		if(board[i][0]==0) {
			q.push({i,0});
			visited[i][0] = 1;
		}
		if(board[i][M-1]==0) {
			q.push({i,M-1});
			visited[i][M-1] = 1;
		}
	}
	
	for(int i=0; i<M; i++) {
		if(board[0][i]==0) {
			q.push({0,i});
			visited[0][i] = 1;
		}
		if(board[N-1][i]==0) {
			q.push({N-1,i});
			visited[N-1][i] = 1;
		}
	}
	
	while(!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				if(board[nx][ny]==0 && visited[nx][ny]==0) {
					visited[nx][ny] = 1;
					q.push({nx, ny});
				}	
			}
		}		
	}
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> M;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}
	
	int cnt = 0;
	
	int flag = 1;
	while(flag) {
		flag = 0;	
		
		check_out();
		
		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				if(board[i][j]==1) {
					int tmp = 0;
					
					for(int k=0; k<4; k++) {
						if(i+dx[k]<0 || i+dx[k]>=N || j+dy[k]<0 || j+dy[k]>=M) continue;
						
						if(visited[i+dx[k]][j+dy[k]]==1) tmp++;
					}	
					
					if(tmp>=2) board[i][j] = 0;
					else flag = 1;
				}
			}

		}
		cnt++;
	}
	
	cout << cnt;
	
	return 0;
}