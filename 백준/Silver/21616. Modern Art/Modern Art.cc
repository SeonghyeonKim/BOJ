#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, Q;
	cin >> N >> M >> Q;
	
	vector<bool> R(N+1), C(M+1);
	while(Q--) {
		char c;
		int a;
		cin >> c >> a;
		
		if(c=='R') {
			R[a] = !R[a];
		}
		else {
			C[a] = !C[a];
		}
	}
	
	int cnt=0, ans=0;
	for(int i=1; i<=N; i++) {
		if(R[i]) cnt++;
	}
	ans = cnt * M;
	
	for(int i=1; i<=M; i++) {
		if(C[i]) {
			ans -= cnt;
			ans += (N-cnt);
		}
	}
	cout << ans;
	
	return 0;
}
