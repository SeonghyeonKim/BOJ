#include <iostream>
#include <vector>
#define ll long long
#define MAX 100001
using namespace std;

ll arr[MAX];
int tree[4*MAX];
ll ans;

int N;

// start : start index, end : end index 
int init(int start, int end, int node) {
	if(start==end) return tree[node] = start;
	
	int mid = (start + end) / 2;
	
	int tmp1 = init(start, mid, node*2);
	int tmp2 = init(mid+1, end, node*2+1);
	
	if(arr[tmp1] < arr[tmp2]) return tree[node] = tmp1;
	else return tree[node] = tmp2;
}

// start : start index, end : end index
// left, right : range of sum
int check(int start, int end, int node, int left, int right) {
	// out of range
	if(left>end || right<start) return 2000000001;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	int mid = (start + end) / 2;
	
	int tmp1 = check(start, mid, node*2, left, right);
	int tmp2 = check(mid+1, end, node*2+1, left, right);
	
	if(tmp1==2000000001) return tmp2;
	else if(tmp2==2000000001) return tmp1;
	else if(arr[tmp1] < arr[tmp2]) return tmp1;
	else return tmp2;
}

void sum(ll left, ll right) {
	if(left>right) return ;
	
	int index = check(0, N-1, 1, left, right);
	ans = max(ans, arr[index] * (right-left+1));
	
	sum(left, index-1);
	sum(index+1, right);
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	init(0,N-1,1);
	sum(0, N-1);
	
	cout << ans;
	
	return 0;
}