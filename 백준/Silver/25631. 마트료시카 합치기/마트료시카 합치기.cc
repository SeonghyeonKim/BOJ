#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	int ans = 0, cnt = 0, tmp = v[0];
	for(int i=0; i<N; i++) {
		if(v[i]==tmp) cnt++;
		else {
			ans = max(ans, cnt);
			cnt = 1;
			tmp = v[i];
		}
	}
	ans = max(ans, cnt);
	cout << ans;
	
	return 0;
}