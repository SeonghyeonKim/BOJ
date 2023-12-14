#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int R, C;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
char board[22][22];
int ans;

void DFS(int x, int y, int cnt, vector<bool>& alpha) {
	ans = max(ans, cnt);
	
	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx>=1 && nx<=R && ny>=1 && ny<=C) {
			if(alpha[board[nx][ny]-'A'] == 0) {
				alpha[board[nx][ny]-'A'] = 1;
				DFS(nx, ny, cnt+1, alpha);
				alpha[board[nx][ny]-'A'] = 0;
			}
		}
	}
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> R >> C;
	
	for(int i=1; i<=R; i++) {
		for(int j=1; j<=C; j++) {
			cin >> board[i][j];
		}
	}
	
	vector<bool> v(26, 0);
	v[board[1][1] - 'A'] = true; 
	DFS(1, 1, 1, v);
	
	cout << ans;
	
	return 0;
}