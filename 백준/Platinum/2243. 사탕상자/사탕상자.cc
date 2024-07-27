#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

int arr[MAX];
int tree[4*MAX];

// start : start index, end : end index 
int init(int start, int end, int node) {
	if(start==end) return tree[node] = arr[start];
	
	int mid = (start + end) / 2;
	return tree[node] = init(start, mid, node*2) + init(mid+1, end, node*2+1);
}

// start : start index, end : end index, rank : 
int pop(int start, int end, int node, int rank) {
	// in range
	if(start == end) return start;
	// or divide two part
	int mid = (start + end) / 2;
	if(tree[node*2] >= rank) 
		return pop(start, mid, node*2, rank);
	return pop(mid+1, end, node*2+1, rank - tree[node*2]);
}

// start : start index, end : end index
// index : location of update node
// dif : value of update node
void update(int start, int end, int node, int index, int dif) {
	// out of range
	if(index<start || index>end) return ;
	// in range
	tree[node] += dif;
	if(start == end) return ;
	
	int mid = (start+end)/2;
	update(start, mid, node*2, index, dif);
	update(mid+1, end, node*2+1, index, dif);
}


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		// 사탕 꺼내기 
		if(a==1) {
			int b;
			cin >> b;
			
			int ret = pop(1, MAX, 1, b);
			cout << ret << "\n";
			arr[ret]--;
			update(1, MAX, 1, ret, -1);
		}
		// 사탕 넣기 
		else if(a==2) {
			int b, c;
			cin >> b >> c;
			
			arr[b] = arr[b] + c;
			update(1, MAX, 1, b, c);
		}
	}

	return 0;
}