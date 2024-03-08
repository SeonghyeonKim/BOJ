#include <iostream>
using namespace std;

int map[17][17];
int copy_map[17][17];
int ans[17][17];
int test[17][17];
int cnt = 987654321;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	// 입력 
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			cin >> map[i][j];
		}
	}

	for(int t=0; t < (1 << M); t++) {		
		int count = 0;
		
		// 복사 
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				copy_map[i][j] = map[i][j];
				test[i][j] = 0;
			}
		}
		
		// 첫줄 확인
		for(int tmp=t, idx=M; tmp>0; tmp/=2, idx--) {
			if(tmp%2) {
				count++;
				test[1][idx] = 1;
				
				copy_map[1][idx] = !copy_map[1][idx];
				copy_map[1][idx+1] = !copy_map[1][idx+1];
				copy_map[1][idx-1] = !copy_map[1][idx-1];
				copy_map[2][idx] = !copy_map[2][idx];
			}
		}
		
		// 나머지 줄 확인 
		for(int i=2; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				if(copy_map[i-1][j] == 1) {
					count++;
					test[i][j] = 1;
					
					copy_map[i][j] = !copy_map[i][j];
					copy_map[i-1][j] = !copy_map[i-1][j];
					copy_map[i+1][j] = !copy_map[i+1][j];
					copy_map[i][j-1] = !copy_map[i][j-1];
					copy_map[i][j+1] = !copy_map[i][j+1];
				}		
			}
		}
		
		int flag = 1;
		for(int i=1; i<=M; i++) {
			if(copy_map[N][i] == true) flag=0; 
		}
		if(flag) {
			if(cnt > count) {
				cnt = count;
				
				for(int i=1; i<=N; i++) {
					for(int j=1; j<=M; j++) {
						ans[i][j] = test[i][j];
					}
				}	
			}
		}
	} 
	
	if(cnt == 987654321) cout << "IMPOSSIBLE";
	else {
		for(int i=1; i<=N; i++) {
			for(int j=1; j<=M; j++) {
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}	
	}
	
	return 0;
}