#include <iostream>
#include <queue>
using namespace std;

struct lo {
	int x, y, k, t;
};

char board[1001][1001];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int visited[1001][1001][11];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, K;
	cin >> N >> M >> K;

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			cin >> board[i][j];
			
			for(int k=0; k<=K; k++) {
				visited[i][j][k] = 987654321;
			}
		}
	}

	queue<lo> q;	
	q.push({1,1,0,1});
	visited[1][1][0] = 1;
	int ans = 987654321;

	while (!q.empty()) {
		lo cur = q.front();
		q.pop();

		if (cur.x==N && cur.y==M) {
			ans = min(ans, cur.t);
			continue;
		}

		for (int i=0; i<4; i++) {
			int nx=cur.x+dx[i];
			int ny=cur.y+dy[i];

			if (nx>0 && nx<=N && ny>0 && ny<=M) {
				if (board[nx][ny]=='1' && cur.k<K) {
					if(visited[nx][ny][cur.k+1] > cur.t+1+((cur.t+1)%2)) {
						visited[nx][ny][cur.k+1] = cur.t+1+((cur.t+1)%2);
						q.push({nx, ny, cur.k+1, cur.t+1+((cur.t+1)%2)});
					}	
				}
				if (board[nx][ny]=='0' && visited[nx][ny][cur.k] > cur.t) {
					visited[nx][ny][cur.k] = cur.t;
					q.push({ nx, ny, cur.k, cur.t+1 });
				}
			}
		}
	}
	if(ans == 987654321) cout << -1;
	else cout << ans;

	return 0;
}