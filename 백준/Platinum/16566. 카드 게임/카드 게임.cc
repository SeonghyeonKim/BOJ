#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[4000001];

int getParent(int x) {
	if(arr[x]==x) return x;
	return arr[x] = getParent(arr[x]);
}

void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	arr[a] = b;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, K;
	cin >> N >> M >> K;
	
	vector<int> v(M);
	for(int i=0; i<M; i++) {
		cin >> v[i];
		arr[i] = i;
	}

	sort(v.begin(), v.end());
	
	for(int i=0; i<K; i++) {
		int a;
		cin >> a;
		
		int idx = getParent(upper_bound(v.begin(), v.end(), a) - v.begin());
		cout << v[idx] << "\n";
		unionParent(idx, idx+1);
	}
	

	return 0;
}