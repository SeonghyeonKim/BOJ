#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K;
	cin >> N >> K;
	
	vector<long long> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	long long sum=0, cnt=0;
	for(int i=0; i<N; i++) {
		sum += cnt*v[i];
		if(cnt<K) cnt++;
	}
	
	cout << sum;
	
	return 0;
}
