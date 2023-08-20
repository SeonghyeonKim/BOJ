#include <iostream>
using namespace std;

int arr[11][11];
int num[11];
int N, K, ans=-987654321;

void dfs(int idx, int cnt) {
	if(cnt == K) {
		int tmp = 0;
		for(int i=0; i<N; i++) {
			for(int j=i+1; j<N; j++) {
				if(num[i] && num[j]) {
					tmp += arr[i][j];
				}
			}
		}
		
		ans = max(ans, tmp);
		
		return ;
	}
	
	for(int i=idx+1; i<N; i++) {
		num[i] = 1;
		dfs(i, cnt+1);
		num[i] = 0;
		dfs(i, cnt);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> K;
	
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> arr[i][j];
		}
	}
	
	if(K==1) {
		cout << 0;
		return 0;	
	}
	
	for(int i=0; i<N; i++) {
		num[i] = 1;
		dfs(i, 1);
		num[i] = 0;
	}
	
	cout << ans;
	
    return 0;
}

