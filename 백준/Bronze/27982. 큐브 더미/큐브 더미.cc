#include <iostream>
#include <queue>
using namespace std;

int cube[6][6][6];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
	
		cube[a-1][b-1][c-1] = 1;
	}
	
	int cnt = 0;
	for(int i=1; i<N-1; i++) {
		for(int j=1; j<N-1; j++) {
			for(int k=1; k<N-1; k++) {
				if(cube[i][j][k]==1) {
					if(cube[i-1][j][k]==1 && cube[i+1][j][k]==1 && cube[i][j-1][k]==1 && cube[i][j+1][k]==1 && cube[i][j][k-1]==1 && cube[i][j][k+1]==1) {
						cnt++;
					}
				}
			}
		}
	}
	cout << cnt;
	
		
 	
	return 0;
}



