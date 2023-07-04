#include <iostream>
#include <vector>
#define MOD 1000000007
#define ll long long
using namespace std;

vector<vector<ll> > graph = {
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 1, 0}
};

vector<vector<ll> > multiply(vector<vector<ll> > a, vector<vector<ll> > b) {
	vector<vector<ll> > ret(8, vector<ll> (8, 0));
	
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			ll tmp = 0;
			
			for(int k=0; k<8; k++) {
				tmp += (a[i][k] * b[k][j]);
				tmp %= MOD;
			}
			ret[i][j] = tmp % MOD;
		}
	}
	return ret;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll D;
	cin >> D;

	vector<vector<ll> > ans(8, vector<ll>(8, 0));
	for(int i=0; i<8; i++) {
		ans[i][i] = 1;
	}
	
	vector<vector<ll> > factor = graph;
	
	while(D) {
		if(D%2==1) {
			ans = multiply(ans, factor);
			D-=1;
		}
		factor = multiply(factor, factor);
		
		D/=2;
	}
	
	cout << ans[0][0];

	return 0;
}