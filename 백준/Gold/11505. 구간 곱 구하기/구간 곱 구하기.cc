#include <iostream>
#include <vector>
#define MAX 1000001
#define ll long long
using namespace std;

ll arr[MAX];
ll tree[4*MAX];

// start : start index, end : end index 
ll init(ll start, ll end, ll node) {
	if(start==end) return tree[node] = arr[start];
	
	ll mid = (start + end) / 2;
	return tree[node] = (init(start, mid, node*2) * init(mid+1, end, node*2+1))%1000000007;
}

// start : start index, end : end index
// left, right : range of sum
ll sum(ll start, ll end, ll node, ll left, ll right) {
	// out of range
	if(left>end || right<start) return 1;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	ll mid = (start + end) / 2;
	return (sum(start, mid, node*2, left, right) * sum(mid+1, end, node*2+1, left, right))%1000000007;
}

// start : start index, end : end index
// index : location of update node
// dif : value of update node
ll update(ll start, ll end, ll node, ll index, ll a) {
	// out of range
	if(index<start || index>end) return tree[node];
	// in range
	if(start == end) {
		tree[node] = a;
		return tree[node];	
	}
	
	ll mid = (start+end)/2;
	return tree[node] = (update(start, mid, node*2, index, a) * update(mid+1, end, node*2+1, index, a))%1000000007;
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	ll N, M, K;
	cin >> N >> M >> K;
	
	for(ll i=0; i<N; i++) cin >> arr[i];	
	
	init(0,N-1,1);
	
	for(ll i=0; i<M+K; i++) {
		ll a, b, c;
		cin >> a >> b >> c;		
		
		if(a==1) {
			update(1,N,1,b,c);
			arr[b-1] = c;
		}
		else {
			cout << sum(1,N,1,b,c)%1000000007 << "\n";
		}
	}
	
	return 0;
}