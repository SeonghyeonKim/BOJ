#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end(), greater<int> ());
	
	long long ans = 0, limit = max(0, v[0]-K);
	for(int i=0; i<N; i++) {
		ans += max(0*1LL, v[i]-limit);
	}
	
	cout << ans;
	
    return 0;
}