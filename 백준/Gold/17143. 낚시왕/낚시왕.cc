#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// dir
// 1: up 
// 2: down
// 3: right
// 4: left
struct node {
	int idx, speed, dir, size;
};

bool comp(node a, node b) {
	return a.size > b.size;
}

node board[101][101];
int R, C, M;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	cin >> R >> C >> M;
	
	for(int i=0; i<M; i++) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		
		board[a][b] = {1, c, d, e};
	}
	
	int ans = 0;
	for(int T=1; T<=C; T++) {
		// 상어 잡기
		for(int i=1; i<=R; i++) {
			if(board[i][T].idx != 0) {
				ans += board[i][T].size;
				board[i][T] = {0, 0, 0, 0};
				break;
			}
		}
		
		// 상어 이동
		vector<node> next[101][101];
		for(int i=1; i<=R; i++) {
			for(int j=1; j<=C; j++) {
				if(board[i][j].idx == T) {
					// U
					if(board[i][j].dir == 1) {
						int nx = (i - board[i][j].speed) % (2 * (R-1));
						
						if(nx <= 0) nx += (2 * (R-1));
						
						if(nx <= R) {
							next[nx][j].push_back({board[i][j].idx+1, board[i][j].speed, 1, board[i][j].size});
						}
						else {
							next[2*R - nx][j].push_back({board[i][j].idx+1, board[i][j].speed, 2, board[i][j].size});
						}
					}
					// D
					else if(board[i][j].dir == 2) {
						int nx = (i + board[i][j].speed) % (2 * (R-1));
						
						if(nx==0) {
							next[2][j].push_back({board[i][j].idx+1, board[i][j].speed, 1, board[i][j].size});
						}
						else if(nx <= R) {
							next[nx][j].push_back({board[i][j].idx+1, board[i][j].speed, 2, board[i][j].size});
						}
						else {
							next[2*R - nx][j].push_back({board[i][j].idx+1, board[i][j].speed, 1, board[i][j].size});
						}
					}
					// R
					else if(board[i][j].dir == 3) {
						int ny = (j + board[i][j].speed) % (2 * (C-1));
						
						if(ny==0) {
							next[i][2].push_back({board[i][j].idx+1, board[i][j].speed, 4, board[i][j].size});
						}
						else if(ny <= C) {
							next[i][ny].push_back({board[i][j].idx+1, board[i][j].speed, 3, board[i][j].size});
						}
						else {
							next[i][2*C - ny].push_back({board[i][j].idx+1, board[i][j].speed, 4, board[i][j].size});
						}
					}
					// L
					else if(board[i][j].dir == 4) {
						int ny = (j - board[i][j].speed) % (2 * (C-1));
												
						if(ny <= 0) ny += (2 * (C-1));
						
						if(ny <= C) {
							next[i][ny].push_back({board[i][j].idx+1, board[i][j].speed, 4, board[i][j].size});
						}
						else {
							next[i][2*C - ny].push_back({board[i][j].idx+1, board[i][j].speed, 3, board[i][j].size});
						}
					}
				}
			}
		}
		
		for(int i=1; i<=R; i++) {
			for(int j=1; j<=C; j++) {
				if(next[i][j].size() > 1) {
					sort(next[i][j].begin(), next[i][j].end(), comp);
					board[i][j] = next[i][j][0];
				}
				else if(next[i][j].size() == 1) {
					board[i][j] = next[i][j][0];
				}
				else {
					board[i][j] = {0, 0, 0, 0};
				}
			}
		}
	}	
	
	cout << ans;
	
    return 0;
}

