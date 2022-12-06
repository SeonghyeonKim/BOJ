#include <iostream>
using namespace std;

int arr[6];
int ans;

void dfs1(int cnt, int sum, int dif) {
	ans = max(ans, sum);
	
	for(int i=1; i<=5; i++) {
		if(cnt<3 && dif+i <= 10) {
			dfs1(cnt+1, sum+arr[i], dif+i);
		}	
	}
}

void dfs2(int cnt, int sum, int dif) {
	if(cnt>=4) ans = max(ans, sum);
	
	for(int i=1; i<=5; i++) {
		if(dif+i <= 15) {
			dfs2(cnt+1, sum+arr[i], dif+i);
		}	
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=1; i<=5; i++) cin >> arr[i];
	
	dfs1(0, 0, 0);
	dfs2(0, 0, 0);
	
	cout << ans;
	
	return 0;
}