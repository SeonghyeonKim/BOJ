#include <iostream>
#include <vector>
#define MAX 100002

using namespace std;

int arr[MAX];
int tree[4*MAX];

int check(int n) {
	if(n>0) return 1; 
	else if(n==0) return 0;
	else return -1;
}

// start : start index, end : end index 
int init(int start, int end, int node) {
	if(start==end) return tree[node] = check(arr[start]);
	
	int mid = (start + end) / 2;
	
	int a = init(start, mid, node*2);
	int b = init(mid+1, end, node*2+1);
	
	return tree[node] = check(a*b);
}

// start : start index, end : end index
// left, right : range of sum
int sum(int start, int end, int node, int left, int right) {
	// out of range
	if(left>end || right<start) return 1;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	int mid = (start + end) / 2;
	
	int a = sum(start, mid, node*2, left, right);
	int b = sum(mid+1, end, node*2+1, left, right);
	
	return check(a*b);
}

// start : start index, end : end index
// index : location of update node
// dif : value of update node
int update(int start, int end, int node, int index, int dif) {
	// out of range
	if(index<start || index>end) return tree[node];
	// in range
	if(start == end) return tree[node] = check(dif);
	
	int mid = (start+end)/2;
	
	int a = update(start, mid, node*2, index, dif);
	int b = update(mid+1, end, node*2+1, index, dif);
	
	return tree[node] = check(a*b);
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K;
	while(cin >> N >> K) {
		for(int i=1; i<=N; i++) cin >> arr[i];
		
		init(1,N,1);
		
		for(int i=0; i<K; i++) {
			char c;
			int a, b;
			cin >> c >> a >> b;
			
				if(c=='C') {
				if(arr[a]*b<=0) update(1,N,1,a,b);
				arr[a] = b;
			}	
			else if(c=='P') {
				int ans = sum(1,N,1,a,b);
				if(ans==0) cout << 0;
				else if(ans==-1) cout << '-';
				else cout << '+';
			}
		}
		
		cout << "\n";
	}
	
	return 0;
}