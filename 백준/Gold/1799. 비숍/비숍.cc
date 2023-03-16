#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

int board[11][11];
int ans1, ans2, N;
vector<pii> v1, v2;

int is_pos(int x, int y) {
	for(int i=0; x-i>=0 && y+i<N; i++) {
		if(board[x-i][y+i]==2) return 0;		
	}
	for(int i=0; x-i>=0 && y-i>=0; i++) {
		if(board[x-i][y-i]==2) return 0;		
	}
	
	return 1;
}

void sol1(int idx, int cnt) {
	ans1 = max(ans1, cnt);
	
	for(int i=idx+1; i<v1.size(); i++) {
		int x = v1[i].first, y = v1[i].second;
		
		if(is_pos(x, y)) {
			board[x][y] = 2;
			sol1(i, cnt+1);
			board[x][y] = 1;
		}
	}
}


void sol2(int idx, int cnt) {
	ans2 = max(ans2, cnt);
	
	for(int i=idx+1; i<v2.size(); i++) {
		int x = v2[i].first, y = v2[i].second;
		
		if(is_pos(x, y)) {
			board[x][y] = 2;
			sol2(i, cnt+1);
			board[x][y] = 1;
		}
	}
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> board[i][j];	
			
			if(board[i][j]==1 && (i+j)%2==0) v1.push_back({i, j});	
			if(board[i][j]==1 && (i+j)%2==1) v2.push_back({i, j});	
		}
	}
	
	for(int i=0; i<v1.size(); i++) {
		int x = v1[i].first, y = v1[i].second;
		board[x][y] = 2;
		sol1(i, 1);
		board[x][y] = 1;
	}
	
	for(int i=0; i<v2.size(); i++) {
		int x = v2[i].first, y = v2[i].second;
		board[x][y] = 2;
		sol2(i, 1);
		board[x][y] = 1;
	}

	cout << ans1 + ans2;

    return 0;
}