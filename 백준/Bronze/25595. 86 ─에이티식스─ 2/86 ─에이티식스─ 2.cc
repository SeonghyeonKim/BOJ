#include <iostream>
using namespace std;

int board[101][101];

int main(void) {
	int N;
	int check=3;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> board[i][j];
			
			if(board[i][j]==2) {
				check = (i+j)%2;
			}
		}
	}
		
	int flag = 1;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(board[i][j]==1) {
				if((i+j)%2==check) flag=0; 
			}
		}
	}
	
	if(flag) cout << "Lena";
	else cout << "Kiriya";
	
	return 0;
}