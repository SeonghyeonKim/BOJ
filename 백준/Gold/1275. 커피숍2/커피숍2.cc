#include <iostream>
#include <vector>
#define MAX 100001
#define ll long long
using namespace std;

ll arr[MAX];
ll tree[4*MAX];

// start : start index, end : end index 
ll init(ll start, ll end, ll node) {
	if(start==end) return tree[node] = arr[start];
	
	ll mid = (start + end) / 2;
	return tree[node] = init(start, mid, node*2) + init(mid+1, end, node*2+1);
}

// start : start index, end : end index
// left, right : range of sum
ll sum(ll start, ll end, ll node, ll left, ll right) {
	// out of range
	if(left>end || right<start) return 0;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	ll mid = (start + end) / 2;
	return sum(start, mid, node*2, left, right) + sum(mid+1, end, node*2+1, left, right);
}

// start : start index, end : end index
// index : location of update node
// dif : value of update node
void update(ll start, ll end, ll node, ll index, ll dif) {
	// out of range
	if(index<start || index>end) return ;
	// in range
	tree[node] += dif;
	if(start == end) return ;
	
	ll mid = (start+end)/2;
	update(start, mid, node*2, index, dif);
	update(mid+1, end, node*2+1, index, dif);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	ll N, M;
	cin >> N >> M;
	
	for(ll i=0; i<N; i++) cin >> arr[i];
	
	init(0, N-1, 1);
	
	for(ll i=0; i<M; i++) {
		ll x, y, a, b;
		cin >> x >> y >> a >> b;	
		
		if(x>y) {
			cout << sum(1, N, 1, y, x) << "\n";
		}
		else {
			cout << sum(1, N, 1, x, y) << "\n";
		}
		
		ll tmp = b - arr[a-1];
		update(1, N, 1, a, tmp);
		arr[a-1] = b;
	}
	
	return 0;
}