#include <iostream>
using namespace std;

int map[14][14];
int copy_map[14][14];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	// 입력 
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			char a;
			cin >> a;
			
			if(a=='#') map[i][j] = 0;
			else map[i][j] = 1;
		}
	}

	int ans = 987654321;
	for(int t=0; t < (1 << 10); t++) {
		int cnt = 0;		
		
		// 복사 
		for(int i=1; i<=10; i++) {
			for(int j=1; j<=10; j++) {
				copy_map[i][j] = map[i][j];
			}
		}
		
		// 첫줄 확인
		for(int tmp=t, idx=1; tmp>0; tmp/=2, idx++) {
			if(tmp%2) {
				cnt++;
				copy_map[1][idx] = !copy_map[1][idx];
				copy_map[1][idx+1] = !copy_map[1][idx+1];
				copy_map[1][idx-1] = !copy_map[1][idx-1];
				copy_map[2][idx] = !copy_map[2][idx];
			}
		}
		
		// 나머지 줄 확인 
		for(int i=2; i<=10; i++) {
			for(int j=1; j<=10; j++) {
				if(copy_map[i-1][j] == true) {
					cnt++;
					copy_map[i][j] = !copy_map[i][j];
					copy_map[i-1][j] = !copy_map[i-1][j];
					copy_map[i+1][j] = !copy_map[i+1][j];
					copy_map[i][j-1] = !copy_map[i][j-1];
					copy_map[i][j+1] = !copy_map[i][j+1];
				}		
			}
		}
		
		// 모든 전구가 꺼졌는지 확인 
		int flag = 1;
		for(int i=1; i<=10; i++) {
			if(copy_map[10][i] == true) flag=0; 
		}
		if(flag) ans = min(ans, cnt);
	} 
	
	if(ans == 987654321) cout << -1;
	else cout << ans;
	
	return 0;
}