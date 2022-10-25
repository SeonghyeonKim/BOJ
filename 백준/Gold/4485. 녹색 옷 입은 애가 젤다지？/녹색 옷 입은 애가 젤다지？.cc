#include <iostream>
#include <deque>
#include <queue>
#include <vector>
using namespace std;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int visited[126][126];
int board[126][126];

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
	
	int cnt = 1;
	while(cnt) {	
		int N;
		cin >> N;
		
		if(N==0) break;
		
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=N; j++) {
				cin >> board[i][j];
				visited[i][j]=0;
			}
		}
		
		priority_queue<node, vector<node>, comp> d;
		d.push({1,1,board[1][1]});
		
		while(!d.empty()) {
			node cnode = d.top();
			d.pop();
			
			if(cnode.x==N && cnode.y==N) {
				cout << "Problem " << cnt << ": " << cnode.c <<"\n";
				break;
			}
			
			for(int i=0; i<4; i++) {
				int nx = cnode.x+dx[i];
				int ny = cnode.y+dy[i];
				
				if(nx>0 && nx<=N && ny>0 && ny<=N) {
					if(visited[nx][ny]==0) {
						visited[nx][ny]=1;
						
						d.push({nx,ny,cnode.c+board[nx][ny]});
					}
				}
			}
		}
		cnt++;
	}
	
	
	return 0;
}