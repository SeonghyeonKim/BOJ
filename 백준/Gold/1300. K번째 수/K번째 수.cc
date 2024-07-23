#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, k;
	cin >> N >> k;
	
	long long left=1, right=k;
	
	while(left < right) {
		long long mid = (left + right)/2;
		long long cnt = 0;
		
		for(int i=1; i<=N; i++) {
			cnt += min(mid/i, N);
		}
		
		if(cnt < k) {
			left = mid+1;
		}
		else {
			right = mid;
		}
	}
	
	cout << left;
	
	return 0;
}