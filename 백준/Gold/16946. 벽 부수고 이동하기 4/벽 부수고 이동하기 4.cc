#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

vector<int> group;
int board[1003][1003];
char b[1003][1003];
int N, M, c=1;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

void bfs(int x, int y) {
	int cnt = 0;
	queue<pii> q;
	q.push({x, y});
	board[x][y] = c;
		
	while(!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;	
		q.pop();
		cnt++;
		
		for(int i=0; i<4; i++) {
			int nx = cx+dx[i];
			int ny = cy+dy[i];
			
			if(b[nx][ny]=='0' && board[nx][ny]==0) {
				board[nx][ny] = c;
				q.push({nx, ny});
			}
		}
	}
	
	group.push_back(cnt);
	
	return ;
}

int count(int x, int y) {
	vector<int> v(4);
	
	v[0] = board[x-1][y];
	v[1] = board[x][y-1];
	v[2] = board[x][y+1];
	v[3] = board[x+1][y];
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	int ret = 0;
	for(int i=0; i<v.size(); i++) ret+=group[v[i]];
	
	return ret;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	group.push_back(0);
	
	cin >> N >> M;
	for(int i=1; i<=N; i++)
		for(int j=1; j<=M; j++)
			cin >> b[i][j];
	
	for(int i=0; i<=N+1; i++) {
		b[i][0] = '1';
		b[i][M+1] = '1';
	}
	
	for(int i=0; i<=M+1; i++) {
		b[0][i] = '1';
		b[N+1][i] = '1';	
	}
			
	for(int i=1; i<=N; i++) 
		for(int j=1; j<=M; j++) 
			if(b[i][j]=='0' && board[i][j]==0) {
				bfs(i, j);
				c++;
			}
			
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(b[i][j]=='1') {
				cout << (1+count(i, j))%10;
			}
			else cout << 0;
		}
		cout << "\n";
	}
	
	return 0;
}
 