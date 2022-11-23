#include <iostream>
#include <cmath>
using namespace std;

int board[3][3];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K, X, Y;
	cin >> N >> K >> X >> Y;
	
	for(int i=0; i<K; i++) {
		int a, b;
		cin >> a >> b;
		
		for(int x=X-1; x<=X+1; x++) {
			for(int y=Y-1; y<=Y+1; y++) {
				if(a==x) board[x-X+1][y-Y+1] = 1;
				if(b==y) board[x-X+1][y-Y+1] = 1;			
				if(abs(a-x)==abs(b-y)) board[x-X+1][y-Y+1] = 1;
			}
		}
	}
	
	if(X==1) {
		board[0][0]=1;
		board[0][1]=1;
		board[0][2]=1;	
	}
	if(X==N) {
		board[2][0]=1;
		board[2][1]=1;
		board[2][2]=1;
	}
	if(Y==1) {
		board[0][0]=1;
		board[1][0]=1;
		board[2][0]=1;	
	}
	if(Y==N) {
		board[0][2]=1;
		board[1][2]=1;
		board[2][2]=1;
	}
	
	if(board[1][1]) {
		if(board[0][0] && board[0][1] && board[0][2]&& board[1][0] && board[1][2] && board[2][0]&& board[2][1] && board[2][2]) cout << "CHECKMATE";
		else cout << "CHECK";
	}	
	else {
		if(board[0][0] && board[0][1] && board[0][2]&& board[1][0] && board[1][2] && board[2][0]&& board[2][1] && board[2][2]) cout << "STALEMATE";
		else cout << "NONE";
	}
	
	return 0;
}
