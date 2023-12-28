#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int N, ans;

void play(vector<vector<int> > board, int cnt, int mode) {
	if(cnt==5) {
		for(int i=0; i<N; i++) 
			for(int j=0; j<N; j++) 
				ans = max(ans, board[i][j]);
				
		return ;	
	}
	
	// upside 
	if(mode==0) {
        for(int j=0; j<N; j++) {
            queue<int> q;
            
            for(int i=0; i<N; i++) {
                if(board[i][j] != 0) {
                    q.push(board[i][j]);
                }   
                board[i][j] = 0; 
            }

            int index = 0;
            while(!q.empty()) {
                int c = q.front();
                q.pop();

                if(!q.empty() && c == q.front()) {
                    board[index][j] = c+c;
                    q.pop();
                }
                else {
                    board[index][j] = c;
                }
                index++;
            }
        }
	}
	// downside
	else if(mode==1) {
		for(int j=0; j<N; j++) {
            queue<int> q;
            
            for(int i=N-1; i>=0; i--) {
                if(board[i][j] != 0) {
                    q.push(board[i][j]);
                }   
                board[i][j] = 0; 
            }

            int index = N-1;
            while(!q.empty()) {
                int c = q.front();
                q.pop();

                if(!q.empty() && c == q.front()) {
                    board[index][j] = c+c;
                    q.pop();
                }
                else {
                    board[index][j] = c;
                }
                index--;
            }
        }
	}
	// leftside
	else if(mode==2) {
		for(int i=0; i<N; i++) {
            queue<int> q;
            
            for(int j=0; j<N; j++) {
                if(board[i][j] != 0) {
                    q.push(board[i][j]);
                }   
                board[i][j] = 0; 
            }

            int index = 0;
            while(!q.empty()) {
                int c = q.front();
                q.pop();

                if(!q.empty() && c == q.front()) {
                    board[i][index] = c+c;
                    q.pop();
                }
                else {
                    board[i][index] = c;
                }
                index++;
            }
        }
	}
	// rightside
	else {
		for(int i=0; i<N; i++) {
            queue<int> q;
            
            for(int j=N-1; j>=0; j--) {
                if(board[i][j] != 0) {
                    q.push(board[i][j]);
                }   
                board[i][j] = 0; 
            }

            int index = N-1;
            while(!q.empty()) {
                int c = q.front();
                q.pop();

                if(!q.empty() && c == q.front()) {
                    board[i][index] = c+c;
                    q.pop();
                }
                else {
                    board[i][index] = c;
                }
                index--;
            }
        }
	}
	
	for(int i=0; i<4; i++) {
		play(board, cnt+1, i);	
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	
    vector<vector<int> > board(N, vector<int> (N, 0));
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> board[i][j];
		}
	}
	
	for(int i=0; i<4; i++) {
		play(board, 0, i);	
	}
	
	cout << ans;
	
	return 0;
}
