#include <iostream>
#include <vector>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll dp[101][10001];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		ll N, K, a, b;
		cin >> N >> K >> a >> b;
		
		vector<pll> v(1);
		for(int i=1; i<=N; i++) {
			ll L;
			cin >> L;
			
			if(L==1) {
				v.push_back({1, 0});
			}
			else {	
				v.push_back({L, a*(L-1)*(L-1)+b});
			}	
		}

		for(int i=0; i<=N; i++) {
			for(int j=0; j<=10000; j++) {
				dp[i][j] = 98765432154321;
			}
		}		

		ll ans = 98765432154321;
		dp[0][0] = 0;
		for(ll i=1; i<=N; i++) {
			for(ll j=0; j<=10000; j++) {
				if(j < v[i].first) dp[i][j] = dp[i-1][j];
				else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i].first]+v[i].second); 
				
				if(j >= K) ans = min(ans, dp[i][j]);
			}
		}
		cout << ans << "\n";
	}
	
    return 0;
}