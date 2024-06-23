#include <iostream>
#include <queue>
#include <vector>
#define pii pair<int, int>
using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while(1) {
		int N, M, x, y;
		cin >> M >> N;
		
		if(N==0 && M==0) break;
		
		vector<vector<char>> board(N, vector<char> (M));
		vector<vector<int>> visited(N, vector<int> (M, 0));
 		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				cin >> board[i][j];
				
				if(board[i][j] == 'A') {
					x = i;
					y = j;
				}
			}
		}
		
		int ans = 0;
		visited[x][y] = 1;
		queue<pii> q;
		q.push({x, y});
		while(!q.empty()) {
			int cx = q.front().first;
			int cy = q.front().second;
			q.pop();
			ans++;
			
			for(int i=0; i<4; i++) {
				int nx = cx + dx[i];
				int ny = cy + dy[i];
				
				if(nx>=0 && nx<N && ny>=0 && ny<M) {
					if(board[nx][ny]=='.' && visited[nx][ny]==0) {
						visited[nx][ny] = 1;
						q.push({nx, ny});
					}
				}
			}
		}
		
		cout << ans << "\n";
	}	
	
	return 0;
}
