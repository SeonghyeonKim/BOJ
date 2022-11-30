#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

vector<ll> v;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T, n, m;
	cin >> T >> n;

	vector<int> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	cin >> m;
	vector<int> B(m);
	for(int i=0; i<m; i++) cin >> B[i];
	
	for(int i=0; i<m; i++) {
		ll tmp = 0;
		
		for(int j=i; j<m; j++) {
			tmp+=B[j];
			v.push_back(tmp);
		}
	}
	
	sort(v.begin(), v.end());
	
	ll ans = 0;
	for(int i=0; i<n; i++) {
		ll tmp = 0;
			
		for(int j=i; j<n; j++) {
			tmp+=A[j];
					
			ll dif = T - tmp;
			auto right = upper_bound(v.begin(), v.end(), dif);
			auto left = lower_bound(v.begin(), v.end(), dif);
		
			ans += right - left;
		}
	}
	
	cout << ans;
	
	return 0;
}