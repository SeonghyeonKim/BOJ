#include <iostream>
using namespace std;

char board[51][51];
int cnt[5];

int main(void) {
	int R, C;
	cin >> R >> C;
	
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin >> board[i][j];
		}
	}
	
	for(int i=0; i<R-1; i++) {
		for(int j=0; j<C-1; j++) {
			int car=0;
			int check=0;
			
			for(int a=0; a<2; a++) {
				for(int b=0; b<2; b++) {
					if(board[i+a][j+b]=='X') car++;
					else if(board[i+a][j+b]=='#') check++;
				}
			}
			
			if(check==0) cnt[car]++;
		}
	}
	
	for(int i=0; i<5; i++) cout << cnt[i] << "\n";
	
	
	return 0;
}