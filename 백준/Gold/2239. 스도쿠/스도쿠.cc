#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

vector<pii> v;
int board[9][9];
int vSize;

bool isCheck(int x, int y, int num) {
	for(int i=0; i<9; i++) {
		if(board[i][y]==num) return false;
		if(board[x][i]==num) return false;	
	}
	
	x/=3;
	y/=3;
	for(int i=x*3; i<x*3+3; i++) {
		for(int j=y*3; j<y*3+3; j++) {
			if(board[i][j]==num) return false;
		}
	}
	
	return true;
}

void solve(int cnt) {
	if(cnt == vSize) {
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++) {
				cout << board[i][j];
			}
			cout << "\n";
		}
		
		exit(0);
	}
	
	for(int i=1; i<=9; i++) {
		if(isCheck(v[cnt].first, v[cnt].second, i)) {
			board[v[cnt].first][v[cnt].second] = i;
			solve(cnt+1);
			board[v[cnt].first][v[cnt].second] = 0;
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			char c;
			cin >> c;
			
			if(c=='0') v.push_back({i,j});
			board[i][j] = c-'0';
		}
	}
	
	
	vSize = v.size();
	solve(0);
	
	return 0;
}