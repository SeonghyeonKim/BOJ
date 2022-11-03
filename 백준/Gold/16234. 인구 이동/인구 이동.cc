#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int board[53][53];
int visited[53][53];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int flag;
int N, L, R;

void init(void) {
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			visited[i][j] = 0;
		}
	}
	
	for(int i=0; i<=N+1; i++) {
		visited[i][0] = 1;
		visited[i][N+1] = 1;
		visited[0][i] = 1;
		visited[N+1][i] = 1;
	}
} 
 
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> L >> R;	
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cin >> board[i][j];
		}
	}
	
	int ans=0;
	while(1) {
		flag = 1;
		init();
		
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=N; j++) {
				if(visited[i][j]==0) {
					int sum = 0;		
					vector<pair<int, int> > tmp;
					
					visited[i][j] = 1;
					queue<pair<int, int> > q;
					q.push({i,j});
					
					while(!q.empty()) {
						int cx = q.front().first;
						int cy = q.front().second;
						q.pop();
						sum += board[cx][cy];
						tmp.push_back({cx, cy});
						
						for(int i=0; i<4; i++) {
							int nx = cx + dx[i];
							int ny = cy + dy[i];
							
							int reg = abs(board[nx][ny] - board[cx][cy]);
							
							if(visited[nx][ny]==0 && reg>=L && reg<=R) {
								q.push({nx, ny});
								visited[nx][ny] = 1;
							}
						}
					}
					
					int si = tmp.size();
					if(si>1) flag = 0;
					
					for(int i=0; i<si; i++) {
						board[tmp[i].first][tmp[i].second] = sum/si; 	
					}
				}
			}
		}
		
		if(flag) break;	
		ans++;
	}
	cout << ans;
	
	return 0;
}