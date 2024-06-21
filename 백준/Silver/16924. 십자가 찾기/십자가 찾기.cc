#include <iostream>
#include <vector>
using namespace std;

struct node {
	int x, y, s;
};

int N, M;
char board[103][103];
char copy_board[103][103];
vector<node> ans;

void check(int x, int y) {
	int cnt=2;
	while(1) {
		if(!(board[x-cnt][y]=='*' && board[x+cnt][y]=='*' && board[x][y-cnt]=='*' && board[x][y+cnt]=='*')) break;
		cnt++;
	}
	
	cnt--;
	copy_board[x][y]='*';
	for(int i=1; i<=cnt; i++) {
		copy_board[x+i][y] = '*';
		copy_board[x-i][y] = '*';
		copy_board[x][y+i] = '*';
		copy_board[x][y-i] = '*';
	}
	
	
	ans.push_back({x, y, cnt});
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> M;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin >> board[i][j];
			copy_board[i][j]='.';
		}
	}
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(board[i][j]=='*' && board[i-1][j]=='*' && board[i][j-1]=='*' && board[i+1][j]=='*' && board[i][j+1]=='*') {
				check(i, j);
			}
		}
	}
	
	int flag=1;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(copy_board[i][j] != board[i][j]) {
				flag=0;
				break;
			}	
			if(!flag) break;
		}
	}
	
	
	if(flag) {
		cout << ans.size() << "\n";
		for(int i=0; i<ans.size(); i++) {
			cout << ans[i].x << " " << ans[i].y << " " << ans[i].s << "\n";
		}
	}
	else {
		cout << -1;
	}
	
	return 0;
}
