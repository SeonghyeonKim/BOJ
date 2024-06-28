#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<long long> v1(N), v2(M);
	for(int i=0; i<N; i++) cin >> v1[i];
	for(int i=0; i<M; i++) cin >> v2[i];
	
	sort(v1.begin(), v1.end(), greater<int> ());
	sort(v2.begin(), v2.end());
	
	long long ans=0;
	for(int i=0; i<min(N,M); i++) {
		ans += max(v1[i]-v2[i], 0*1LL);
	}
	cout << ans;
	
	return 0;
}
