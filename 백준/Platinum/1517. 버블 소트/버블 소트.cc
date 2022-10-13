#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000001
#define ll long long
using namespace std;

ll arr[MAX];
ll tree[4*MAX];

void update(ll start, ll end, ll node, ll idx) {
	if(start==end) {
		tree[node] = 1;	
		return ;
	}
	
	ll mid = (start + end) / 2;
	if(idx <= mid) update(start, mid, node*2, idx);
	else update(mid+1, end, node*2+1, idx);
	
	tree[node] = tree[node*2] + tree[node*2+1];
	return ;
}

// start : start index, end : end index
// left, right : range of sum
ll check(ll start, ll end, ll node, ll left, ll right) {
	// out of range
	if(left>end || right<start) return 0;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	ll mid = (start + end) / 2;
	return check(start, mid, node*2, left, right) + check(mid+1, end, node*2+1, left, right);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	ll N;
	cin >> N;
	
	vector<pair<ll, ll> > v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	
	sort(v.begin(), v.end());
	
	ll ans = 0;
	for(int i=0; i<N; i++) {
		ans += check(1,N,1,v[i].second+1,N);
		update(1,N,1,v[i].second);	
	}
	cout << ans;
	
	return 0;
}