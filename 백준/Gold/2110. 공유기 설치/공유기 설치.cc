#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, C;
	cin >> N >> C;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	int ans = 0;
	int left=0, right=1000000010;
	while(left < right) {
		int mid = (left + right)/2;

		int cnt = 1;
		int tmp = 0;
		for(int i=0; i<N; i++) {
			if(v[tmp] + mid <= v[i]) {
				cnt++;
				tmp = i;
			}
		}	
		
		if(cnt >= C) {
			ans = max(ans, mid);
			left = mid+1;
		}
		else {
			right = mid;
		}
	}
	cout << ans;
	    
    return 0;
}