#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;

ll power(ll a, ll b) {
	if(b==0) return 1;
	
	ll tmp = power(a, b/2) % MOD;
	if(b%2==1) return (((tmp * tmp) % MOD) * a) % MOD;
	return (tmp * tmp) % MOD;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	ll N, K;
	cin >> N >> K;

	if(K==1 || N-1==K) {
		cout << N;
		return 0;
	}
	else if(K==0 || N==K) {
		cout << 1;
		return 0;
	}
	
	ll a=1, b=1, ans=0;
	for(int i=N; i>=N-K+1; i--) 
		a = (a * i) % MOD;
	for(int i=1; i<=K; i++)
		b = (b * i) % MOD;
			
	ans = ((a * power(b, MOD-2)) % MOD) % MOD;
	
	cout << ans;

	return 0;
}