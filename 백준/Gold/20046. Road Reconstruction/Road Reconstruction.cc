#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int board[1001][1001];
int visited[1001][1001];


typedef struct {
	int x, y, cost;
} node;

struct compare {
	bool operator() (node a, node b) {
		return a.cost > b.cost;
	}
};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> M;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
		}
	}

	int cnt=0;
	if(board[0][0]==-1) {
		cout << "-1";
		return 0;
	}
	else if(board[0][0]!=0) cnt+=board[0][0];
	
	priority_queue<node, vector<node>, compare> pq;
	pq.push({0,0,cnt});
	visited[0][0] = 1;
	while(!pq.empty()) {
		node cn = pq.top();
		pq.pop();
		
		if(cn.x==N-1 && cn.y==M-1) {
			cout << cn.cost;
			return 0;
		}
		
		for(int i=0; i<4; i++) {
			int nx = cn.x+dx[i];
			int ny = cn.y+dy[i];
			
			if(nx>=0 && nx<N && ny>=0 && ny<M) {
				if(board[nx][ny]!=-1 && visited[nx][ny]==0) {
					visited[nx][ny] = 1;
					pq.push({nx, ny, cn.cost+board[nx][ny]});
				}
			}
		}
	}
	
	
	cout << "-1";
	
	return 0;
}