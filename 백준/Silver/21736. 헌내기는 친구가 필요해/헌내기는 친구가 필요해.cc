#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
using namespace std;

char board[601][601];
int visited[601][601];
int x, y;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
			
			if(board[i][j]=='I') {
				x = i;
				y = j;
			}
		}
	}
	
	int ans = 0;
	queue<pii> q;
	visited[x][y] = 1;
	q.push({x, y});
	
	while(!q.empty()) {
		pii c = q.front();
		q.pop();
		
		for(int i=0; i<4; i++) {
			int nx = c.first+dx[i];
			int ny = c.second+dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M && visited[nx][ny]==0 && board[nx][ny]!='X') {
				if(board[nx][ny]=='P') ans++;
				
				visited[nx][ny] = 1;
				q.push({nx, ny});
			}
		}
	}	
	
	if(ans) cout << ans;
	else cout << "TT";

	return 0;
}
