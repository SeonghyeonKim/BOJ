#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int N, M;

struct node {
	int rx, ry, bx, by, cnt, mode;
	vector<string> b;
	string s;
};

void BFS(vector<string> board) {
	int rx, ry, bx, by;
	// 구슬 좌표 구하기 
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			if(board[i][j]=='R') {
				rx = i;
				ry = j;
			}
			if(board[i][j]=='B') {
				bx = i;
				by = j;
			}
		}
	}
	
	queue<node> q;
	q.push({rx, ry, bx, by, 0, -1, board, ""});
	// BFS 
	while(!q.empty()) {
		node cur = q.front();
		q.pop();
		// 10회 이상 시도  
		if(cur.cnt>=10) {
			cout << "-1";
			return ;
		}
		
		// Up 
		if(cur.mode!=0) {
			node next = cur;
			next.mode = 0;
			next.cnt++;
			int flag=0;
			
			if(next.rx > next.bx) {
				// 파란 구슬 먼저 
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.bx; i>=0; i--) {
					if(next.b[i-1][next.by] == '#') {
						next.b[i][next.by] = 'B';
						next.bx = i;
						break;
					}
					else if(next.b[i-1][next.by] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.rx][next.ry] = '.';
				for(int i=next.rx; i>=0; i--) {
					if(next.b[i-1][next.ry] == '#' || next.b[i-1][next.ry] == 'B') {
						next.b[i][next.ry] = 'R';
						next.rx = i;
						break;
					}
					else if(next.b[i-1][next.ry] == 'O') {
						if(!flag) {
							cout << next.cnt << "\n" << next.s << "U";
							return ;
						} 
					}
				}
				
				if(!flag) {
					next.s = next.s + "U";
					q.push(next);
				}
			}
			else {
				// 빨간 구슬 먼저
				next.b[next.rx][next.ry] = '.';
				for(int i=next.rx; i>=0; i--) {
					if(next.b[i-1][next.ry] == '#') {
						next.b[i][next.ry] = 'R';
						next.rx = i;
						break;
					}
					else if(next.b[i-1][next.ry] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.bx; i>=0; i--) {
					if(next.b[i-1][next.by] == '#' || next.b[i-1][next.by] == 'R') {
						next.b[i][next.by] = 'B';
						next.bx = i;
						break;
					}
					else if(next.b[i-1][next.by] == 'O') {
						flag += 2;
						break;
					}
				}
				
				if(flag == 1) {
					cout << next.cnt << "\n" << next.s << "U";
					return ;
				}
				else if(flag == 0) {
					next.s = next.s + "U";
					q.push(next);
				}		
			}
		} 
		// Down
		if(cur.mode!=1) {
			node next = cur;
			next.mode = 1;
			next.cnt++;
			int flag=0;
			
			if(next.rx < next.bx) {
				// 파란 구슬 먼저 
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.bx; i<N; i++) {
					if(next.b[i+1][next.by] == '#') {
						next.b[i][next.by] = 'B';
						next.bx = i;
						break;
					}
					else if(next.b[i+1][next.by] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.rx][next.ry] = '.';
				for(int i=next.rx; i<N; i++) {
					if(next.b[i+1][next.ry] == '#' || next.b[i+1][next.ry] == 'B') {
						next.b[i][next.ry] = 'R';
						next.rx = i;
						break;
					}
					else if(next.b[i+1][next.ry] == 'O') {
						if(!flag) {
							cout << next.cnt << "\n" << next.s << "D";
							return ;
						} 
					}
				}
				
				if(!flag) {
					next.s = next.s + "D";
					q.push(next);
				}
			}
			else {
				// 빨간 구슬 먼저
				next.b[next.rx][next.ry] = '.';
				for(int i=next.rx; i<N; i++) {
					if(next.b[i+1][next.ry] == '#') {
						next.b[i][next.ry] = 'R';
						next.rx = i;
						break;
					}
					else if(next.b[i+1][next.ry] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.bx; i<N; i++) {
					if(next.b[i+1][next.by] == '#' || next.b[i+1][next.by] == 'R') {
						next.b[i][next.by] = 'B';
						next.bx = i;
						break;
					}
					else if(next.b[i+1][next.by] == 'O') {
						flag += 2;
						break;
					}
				}
				if(flag == 1) {
					cout << next.cnt << "\n" << next.s << "D";
					return ;
				}
				else if(flag == 0) {
					next.s = next.s + "D";
					q.push(next);
				}		
			}
		}
		// Left
		if(cur.mode!=2) {
			node next = cur;
			next.mode = 2;
			next.cnt++;
			int flag=0;
			
			if(next.ry > next.by) {
				// 파란 구슬 먼저 
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.by; i>=0; i--) {
					if(next.b[next.bx][i-1] == '#') {
						next.b[next.bx][i] = 'B';
						next.by = i;
						break;
					}
					else if(next.b[next.bx][i-1] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.rx][next.ry] = '.';
				for(int i=next.ry; i>=0; i--) {
					if(next.b[next.rx][i-1] == '#' || next.b[next.rx][i-1] == 'B') {
						next.b[next.rx][i] = 'R';
						next.ry = i;
						break;
					}
					else if(next.b[next.rx][i-1] == 'O') {
						if(!flag) {
							cout << next.cnt << "\n" << next.s << "L";
							return ;
						} 
					}
				}
				
				if(!flag) {
					next.s = next.s + "L";
					q.push(next);
				}
			}
			else {
				// 빨간 구슬 먼저
				next.b[next.rx][next.ry] = '.';
				for(int i=next.ry; i>=0; i--) {
					if(next.b[next.rx][i-1] == '#') {
						next.b[next.rx][i] = 'R';
						next.ry = i;
						break;
					}
					else if(next.b[next.rx][i-1] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.by; i>=0; i--) {
					if(next.b[next.bx][i-1] == '#' || next.b[next.bx][i-1] == 'R') {
						next.b[next.bx][i] = 'B';
						next.by = i;
						break;
					}
					else if(next.b[next.bx][i-1] == 'O') {
						flag += 2;
						break;
					}
				}
				if(flag == 1) {
					cout << next.cnt << "\n" << next.s << "L";
					return ;
				}
				else if(flag == 0) {
					next.s = next.s + "L";
					q.push(next);
				}	
			}
		} 
		// Right
		if(cur.mode!=3) {
			node next = cur;
			next.mode = 3;
			next.cnt++;
			int flag=0;
			
			if(next.ry < next.by) {
				// 파란 구슬 먼저 
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.by; i<M; i++) {
					if(next.b[next.bx][i+1] == '#') {
						next.b[next.bx][i] = 'B';
						next.by = i;
						break;
					}
					else if(next.b[next.bx][i+1] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.rx][next.ry] = '.';
				for(int i=next.ry; i<M; i++) {
					if(next.b[next.rx][i+1] == '#' || next.b[next.rx][i+1] == 'B') {
						next.b[next.rx][i] = 'R';
						next.ry = i;
						break;
					}
					else if(next.b[next.rx][i+1] == 'O') {
						if(!flag) {
							cout << next.cnt << "\n" << next.s << "R";
							return ;
						} 
					}
				}
				
				if(!flag) {
					next.s = next.s + "R";
					q.push(next);
				}
			}
			else {
				// 빨간 구슬 먼저
				next.b[next.rx][next.ry] = '.';
				for(int i=next.ry; i<M; i++) {
					if(next.b[next.rx][i+1] == '#') {
						next.b[next.rx][i] = 'R';
						next.ry = i;
						break;
					}
					else if(next.b[next.rx][i+1] == 'O') {
						flag = 1;
						break;
					}
				}
				
				next.b[next.bx][next.by] = '.'; 
				for(int i=next.by; i<M; i++) {
					if(next.b[next.bx][i+1] == '#' || next.b[next.bx][i+1] == 'R') {
						next.b[next.bx][i] = 'B';
						next.by = i;
						break;
					}
					else if(next.b[next.bx][i+1] == 'O') {
						flag += 2;
						break;
					}
				}
				if(flag == 1) {
					cout << next.cnt << "\n" << next.s << "R";
					return ;
				}
				else if(flag == 0) {
					next.s = next.s + "R";
					q.push(next);
				}		
			}
		}
	}
	cout << -1;
	return ;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	cin >> N >> M;
	vector<string> board(N);
	for(int i=0; i<N; i++) cin >> board[i];
	
	BFS(board);
	
    return 0;
}
