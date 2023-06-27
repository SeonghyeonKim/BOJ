#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
using namespace std;

int arr[1000001];
int sum[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int s, e;
		cin >> s >> e;
		
		arr[s]++;
		arr[e+1]--;
	}
	 
	sum[0] = arr[0];
	for(int i=1; i<1000001; i++) {
		sum[i] = sum[i-1] + arr[i];
	}
	 
	cin >> M;
	for(int i=0; i<M; i++) {
		int a;
		cin >> a;
		
		cout << sum[a] << "\n";
	}
	
	return 0;
}
