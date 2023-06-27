#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
using namespace std;

int board[101][101];
bool visited[101][101];
string answer[101][101];

string ADD(string a, string b) {
	int maxSize = max(a.size(), b.size());
	a.resize(maxSize, '0');
	b.resize(maxSize, '0');
	
	int carry = 0;
	for(int i=maxSize-1; i>=0; i--) {
		if(a[i]=='1' && b[i]=='1' && carry==1) {
			carry = 1;
			a[i]='1';
		}
		else if(a[i]=='1' && b[i]=='1') {
			carry = 1;
			a[i]='0';
		}
		else if(carry==1 && (a[i]=='1' || b[i]=='1')) {
			carry = 1;
			a[i]='0';
		}
		else if(carry==1){
			carry = 0;
			a[i]='1';
		}
		else if(a[i]=='0' && b[i]=='0') {
			carry = 0;
			a[i]='0';
		}
		else {
			carry = 0;
			a[i]='1';
		}
	}
	
	while(a.back()=='0') a.pop_back();
	
	return a;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, x, y;
	cin >>  N >> M;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> board[i][j];
			
			if(board[i][j]==2) {
				x = i;
				y = j;
			}
		}
	}
	
	queue<pii> q;
	q.push({x, y});
	answer[x][y] = "1";
	
	while(!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		
		if(cx==N-1) continue;
		if(visited[cx][cy]) continue;
		visited[cx][cy] = 1;
		
		if(board[cx+1][cy]==0) {
			answer[cx+1][cy] = ADD(answer[cx+1][cy], answer[cx][cy]);
			q.push({cx+1, cy});
		}
		else {
			if(board[cx+1][cy-1]==0 && board[cx][cy-1]==0) {
				answer[cx+1][cy-1] = ADD(answer[cx+1][cy-1], "0" + answer[cx][cy]);
				q.push({cx+1, cy-1});
			}
			if(board[cx+1][cy+1]==0 && board[cx][cy+1]==0) {
				answer[cx+1][cy+1] = ADD(answer[cx+1][cy+1], "0" + answer[cx][cy]);
				q.push({cx+1, cy+1});
			}
		}
	}	
	
	
	int ans = -1;
	string maxP = "";
	
	for(int i=0; i<M; i++) {
		if(maxP < answer[N-1][i]) {
			ans = i;
			maxP = answer[N-1][i];
		}
	}
	cout << ans;
	
	return 0;
}



