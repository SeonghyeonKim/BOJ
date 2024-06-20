#include <iostream>
#include <vector>
using namespace std;

vector<int> check(7,0);
vector<int> cost(7);
vector<int> board;
int ans;
int N, K;

void solve(int idx) {
	if(idx == 7) {
		int tmp=K, cnt=0;
		for(int i=0; i<N; i++) {
			if(check[board[i]] && tmp>=cost[board[i]]) {
				tmp -= cost[board[i]];
				cnt++;
			}	
		}
		ans = max(cnt, ans);
	}
	else {
		check[idx] = 1;
		solve(idx+1);
		check[idx] = 0;
		solve(idx+1);
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> K;
	
	for(int i=1; i<=6; i++) cin >> cost[i];
	
	vector<int> v(N, 0);
	for(int i=0; i<N; i++) cin >> v[i];
	board = v;
	
	solve(1);
	cout << ans;
	
	return 0;
}
