#include <iostream>
using namespace std;

long long mod = 10007;
long long nCk[53][53];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<=52; i++) {
		nCk[i][0] = 1;
		nCk[i][i] = 1;
			
		for(int j=1; j<i; j++) {
			nCk[i][j] = nCk[i-1][j-1] + nCk[i-1][j];
			nCk[i][j] %= mod;
			nCk[i][i-j] = nCk[i][j];
		}
	}
	
	long long ans = 0;
	for(int i=1; i<=N/4; i++) {
		if(i%2) {
			ans += nCk[13][i] * nCk[52-4*i][N-4*i];
		}
		else {
			ans -= nCk[13][i] * nCk[52-4*i][N-4*i];
		}
		
		ans %= mod;
	}
	
	if(ans < 0) cout << ans+mod;
	else cout << ans;
	
	return 0;
}

