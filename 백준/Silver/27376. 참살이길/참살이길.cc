#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

struct lo {
	ll x, t, s;
};

bool comp(lo a, lo b) {
	return a.x < b.x;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	
	vector<lo> v(k);
	for(int i=0; i<k; i++) {
		cin >> v[i].x >> v[i].t >> v[i].s;
	}
	
	sort(v.begin(), v.end(), comp);
	
	ll ans = 0, dis = 0;
	for(int i=0; i<k; i++) {
		ll tmp = v[i].x - dis;
		ans += tmp;
		
		if(ans < v[i].s) ans = v[i].s;
		else if(((ans-v[i].s)/v[i].t)%2==1) ans = ((ans-v[i].s)/v[i].t + 1)*v[i].t + v[i].s;
		
		dis = v[i].x;
	}
	
	cout << ans + n-dis;
	
    return 0;
}
