#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	
	int x=0, y=0;
	vector<vector<int> > v(N, vector<int> (M));
	vector<int> mx(N);
	for(int i=0; i<N; i++) {
		int tmp = 0;
		
		for(int j=0; j<M; j++) {
			cin >> v[i][j];
			
			tmp = max(tmp, v[i][j]);
		}
		
		x = max(x, 3*tmp + 2*(N-1-i) + 3);
		mx[i] = tmp;
	}
	y = 4*M + 2*N + 1; 
    
    vector<string> answer(x, string(y, '.'));
    for(int i=0; i<N; i++) {
    	int idx = N-i-1;
    	
    	for(int j=1; j<=mx[i]; j++) {
    		for(int k=0; k<M; k++) {
    			if(v[i][k] < j) continue;
    			
    			int cx = x - 2*idx - 3*j + 2;
    			int cy = 2*idx + 4*k;
    			
    			answer[cx][cy] = '+';
    			answer[cx][cy+1] = '-';
    			answer[cx][cy+2] = '-';
    			answer[cx][cy+3] = '-';
    			answer[cx][cy+4] = '+';
    			
				answer[cx-1][cy] = '|';
				answer[cx-1][cy+1] = ' ';
				answer[cx-1][cy+2] = ' ';
				answer[cx-1][cy+3] = ' ';
				answer[cx-1][cy+4] = '|';
				answer[cx-1][cy+5] = '/';
				
    			answer[cx-2][cy] = '|';
				answer[cx-2][cy+1] = ' ';
				answer[cx-2][cy+2] = ' ';
				answer[cx-2][cy+3] = ' ';
				answer[cx-2][cy+4] = '|';
				answer[cx-2][cy+5] = ' ';
				answer[cx-2][cy+6] = '+';
				
    			answer[cx-3][cy] = '+';
    			answer[cx-3][cy+1] = '-';
    			answer[cx-3][cy+2] = '-';
    			answer[cx-3][cy+3] = '-';
    			answer[cx-3][cy+4] = '+';
    			answer[cx-3][cy+5] = ' ';
    			answer[cx-3][cy+6] = '|';
    			
    			answer[cx-4][cy+1] = '/';
    			answer[cx-4][cy+2] = ' ';
    			answer[cx-4][cy+3] = ' ';
    			answer[cx-4][cy+4] = ' ';
    			answer[cx-4][cy+5] = '/';
    			answer[cx-4][cy+6] = '|';
    			
    			answer[cx-5][cy+2] = '+';
    			answer[cx-5][cy+3] = '-';
    			answer[cx-5][cy+4] = '-';
    			answer[cx-5][cy+5] = '-';
    			answer[cx-5][cy+6] = '+';
			}
		}
	}
    
    for(int i=0; i<x; i++) {
    	cout << answer[i] << "\n";
	}
    
    return 0;
}

