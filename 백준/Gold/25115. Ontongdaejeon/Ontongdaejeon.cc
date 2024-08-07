#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define ld long double
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<ll> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	//sort(v.begin(), v.end(), greater<ll> ());
	
	ll left = 0, right = 200000LL * 1000000000;
	ll ans = right;
	
	while(left <= right) {
		ll mid = (left+right)/2;
		
		int flag=1;
		ll r=mid;
		ld c=0;
		for(int i=0; i<N; i++) {
			if(r >= v[i]) {
				r -= v[i];
				c += v[i]/10.0L;
			}
			else {
				if(r+c >= v[i]) {
					if(r==0) {
						c -= v[i];
					}
					else {
						ll x = v[i] - r;						
						c = (c-x) + (v[i]-x)/10.0L;
						r = 0;
					}
				}
				else {
					flag = 0;
					break;
				}
			}
		}
		
		if(flag==0) {
			left = mid+1;
		} 
		else {
			ans = min(ans, mid);
			right = mid-1;
		}
	}
	cout << ans;

	return 0;
}