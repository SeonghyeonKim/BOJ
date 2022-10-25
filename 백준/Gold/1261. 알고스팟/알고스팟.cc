#include <iostream>
#include <deque>
#include <queue>
#include <vector>
using namespace std;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int visited[102][102];
char board[102][102];

struct node {
	int x, y, c;
};

struct comp {
	bool operator () (node a, node b) {
		return a.c > b.c;	
	}
};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> M >> N;
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin >> board[i][j];
		}
	}
	
	priority_queue<node, vector<node>, comp> d;
	d.push({1,1,0});
	
	while(!d.empty()) {
		node cnode = d.top();
		d.pop();
		
		if(cnode.x==N && cnode.y==M) {
			cout << cnode.c;
			return 0;
		}
		
		for(int i=0; i<4; i++) {
			int nx = cnode.x+dx[i];
			int ny = cnode.y+dy[i];
			
			if(nx>0 && nx<=N && ny>0 && ny<=M) {
				if(visited[nx][ny]==0) {
					visited[nx][ny]=1;
					
					if(board[nx][ny]=='1') {
						d.push({nx,ny,cnode.c+1});
					}
					else {
						d.push({nx,ny,cnode.c});
					}
				}
			}
		}
	}
	
	return 0;
}