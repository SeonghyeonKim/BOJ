#include <iostream>
#include <vector>
using namespace std;

char board[103][103];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cin >> board[i][j];
		}
	}

	int ans = 0;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			if(board[i][j]=='M') {
				if(board[i-1][j-1]=='O') {
					if(board[i-2][j-2]=='B') {
						if(board[i-3][j-3]=='I') {
							if(board[i-4][j-4]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i-1][j]=='O') {
					if(board[i-2][j]=='B') {
						if(board[i-3][j]=='I') {
							if(board[i-4][j]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i-1][j+1]=='O') {
					if(board[i-2][j+2]=='B') {
						if(board[i-3][j+3]=='I') {
							if(board[i-4][j+4]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i][j-1]=='O') {
					if(board[i][j-2]=='B') {
						if(board[i][j-3]=='I') {
							if(board[i][j-4]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i][j+1]=='O') {
					if(board[i][j+2]=='B') {
						if(board[i][j+3]=='I') {
							if(board[i][j+4]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i+1][j-1]=='O') {
					if(board[i+2][j-2]=='B') {
						if(board[i+3][j-3]=='I') {
							if(board[i+4][j-4]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i+1][j]=='O') {
					if(board[i+2][j]=='B') {
						if(board[i+3][j]=='I') {
							if(board[i+4][j]=='S') {
								ans++;
							}
						}
					}
				}
				if(board[i+1][j+1]=='O') {
					if(board[i+2][j+2]=='B') {
						if(board[i+3][j+3]=='I') {
							if(board[i+4][j+4]=='S') {
								ans++;
							}
						}
					}
				}
			}
		}
	}
	cout << ans;
	
	return 0;
}