#include <iostream>
#include <vector>
#include <string>
using namespace std;

char board[103][103];
int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {1,0,-1,1,-1,1,0,-1};
string s = "MOBIS";

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
				for(int T=0; T<8; T++) {
					int flag=1;
					
					for(int t=1; t<=4; t++) {
						int nx = i + dx[T]*t;
						int ny = j + dy[T]*t;
						
						if(board[nx][ny] != s[t]) {
							flag=0;
							break;
						}
					}
					
					if(flag) ans++;
				}
			}
		}
	}
	cout << ans;
	
	return 0;
}