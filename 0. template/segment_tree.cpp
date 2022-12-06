#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;

int arr[MAX];
int tree[4*MAX];

// start : start index, end : end index 
int init(int start, int end, int node) {
	if(start==end) return tree[node] = arr[start];
	
	int mid = (start + end) / 2;
	return tree[node] = init(start, mid, node*2) + init(mid+1, end, node*2+1);
}

// start : start index, end : end index
// left, right : range of sum
int sum(int start, int end, int node, int left, int right) {
	// out of range
	if(left>end || right<start) return 0;
	// in range
	if(left<=start && end<=right) return tree[node];
	// or divide two part
	int mid = (start + end) / 2;
	return sum(start, mid, node*2, left, right) + sum(mid+1, end, node*2+1, left, right);
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

