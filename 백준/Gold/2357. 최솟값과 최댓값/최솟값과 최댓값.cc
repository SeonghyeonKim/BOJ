#include <iostream>
#include <vector>
#define pii pair<int, int>
#define MAX 100001
using namespace std;

int arr[MAX];
pii tree[4*MAX];

// start : start index, end : end index 
pii init(int start, int end, int node) {
	if(start==end) return tree[node] = {arr[start], arr[start]};
	
	int mid = (start + end) / 2;
	
	pii tmp1 = init(start, mid, node*2);
	pii tmp2 = init(mid+1, end, node*2+1);
	
	return tree[node] = make_pair(min(tmp1.first, tmp2.first), max(tmp1.second, tmp2.second));
}

// start : start index, end : end index
// left, right : range of sum
pii sum(int start, int end, int node, int left, int right) {
	// out of range
	if(left>end || right<start) return {1000000001,-1000000001};
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	int mid = (start + end) / 2;
	
	pii tmp1 = sum(start, mid, node*2, left, right);
	pii tmp2 = sum(mid+1, end, node*2+1, left, right);
	
	return make_pair(min(tmp1.first, tmp2.first), max(tmp1.second, tmp2.second));
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	for(int i=0; i<N; i++) cin >> arr[i];
	
	init(0,N-1,1);
	
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b;
		
		pii p= sum(1, N, 1, a, b);
		cout << p.first << " " << p.second << "\n";
	}
	
	return 0;
}