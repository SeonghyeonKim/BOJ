#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long arr[500001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
		
	int N;
	cin >> N;
	
	vector<long long> v(N+1), idx(N+1);
	for(int i=1; i<=N; i++) {
		cin >> v[i];
		idx[v[i]] = i;
	}
	
	
	for(int i=1; i<=N; i++) {
		arr[i] += abs(idx[i]-i);
		arr[v[i]] += abs(idx[i]-i);
		int tmp = v[i];
		swap(v[i], v[idx[i]]);
		swap(idx[i], idx[tmp]);
	}
	
	for(int i=1; i<=N; i++) cout << arr[i] << " ";
	
	return 0;
}