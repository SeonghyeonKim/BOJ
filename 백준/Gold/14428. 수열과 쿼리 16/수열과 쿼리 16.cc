#include <iostream>
#include <vector>
#define MAX 100002

using namespace std;

int arr[MAX];
int tree[4*MAX];

// start : start index, end : end index 
int init(int start, int end, int node) {
	if(start==end) return tree[node] = start;
	
	int mid = (start + end) / 2;
	
	int a = init(start, mid, node*2);
	int b = init(mid+1, end, node*2+1);
	
	return tree[node] = arr[a]<=arr[b]?a:b;
}

// start : start index, end : end index
// left, right : range of sum
int sum(int start, int end, int node, int left, int right) {
	// out of range
	if(left>end || right<start) return -1;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	int mid = (start + end) / 2;
	
	int a = sum(start, mid, node*2, left, right);
	int b = sum(mid+1, end, node*2+1, left, right);
	
	if(a==-1) return b;
	else if(b==-1) return a;
	
	return arr[a]<=arr[b]?a:b;
}

// start : start index, end : end index
// index : location of update node
// dif : value of update node
int update(int start, int end, int node, int index, int dif) {
	// out of range
	if(index<start || index>end) return tree[node];
	// in range
	if(start == end) return tree[node];
	
	int mid = (start+end)/2;
	
	int a = update(start, mid, node*2, index, dif);
	int b = update(mid+1, end, node*2+1, index, dif);
	
	return tree[node] = arr[a]<=arr[b]?a:b;
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) cin >> arr[i];
	
	init(1,N,1);
	
	int M;
	cin >> M;
	
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a==1) {
			arr[b] = c;	
			update(1,N,1,b,c);
		}
		else if(a==2) {
			cout << sum(1,N,1,b,c) << "\n";
		}
	}
	
	return 0;
}