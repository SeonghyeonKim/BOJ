#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

// 지도 
char board[1003][1003]; 
// 1인 경우 전파 완료 
int ans[1003][1003];
// 방문 확인 
int visited[1003][1003];

// 방문 시각, x좌표, y좌표 
struct Node {
	int time, x, y;
};

// 방문 시각이 작은 노드 우선 
struct comp {
	bool operator() (Node a, Node b) {
		return a.time > b.time;
	}
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, Tg, Tb, X, B;
	cin >> N >> M;
	cin >> Tg >> Tb >> X >> B;
	
	priority_queue<Node, vector<Node>, comp> pq;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin >> board[i][j];
			
			// 바이러스 살포 지역인 경우 
			if(board[i][j]=='*') {
				pq.push({0, i, j});
				ans[i][j] = 1; 
				visited[i][j] = 1;
			}
		}
	}
	
	// BFS
	while(!pq.empty()) {
		Node cur = pq.top();
		pq.pop();
		
		// 전파 시간 전까지 탐색 
		if(cur.time > Tg) {
			break;
		}
		
		// 전파 완료 
		ans[cur.x][cur.y]=1;
		
		for(int i=0; i<4; i++) {
			int nx = cur.x + dx[i];
			int ny = cur.y + dy[i];
			
			if(nx>0 && nx<=N && ny>0 && ny<=M) {
				// 탐색하지 않은 경우 
				if(visited[nx][ny]==0) {
					if(board[nx][ny]=='#') {
						pq.push({cur.time+1+Tb, nx, ny});
						visited[nx][ny] = 1;
					} 
					else if(board[nx][ny]=='.') {
						pq.push({cur.time+1, nx, ny});
						visited[nx][ny] = 1;
					}
				}
			}	
		}
	}
	
	// 출력 
	int flag = 1; 
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(ans[i][j] == 0) {
				flag = 0;
				cout << i << " " << j << "\n";
			}			
		}
	}
	if(flag) cout << -1;
	
	return 0;
}
