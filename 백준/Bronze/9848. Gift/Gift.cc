#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, k, ans=0;
	cin >> n >> k;
	
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	for(int i=1; i<n; i++) {
		if(v[i-1]-v[i] >= k) {
			ans++;
		}
	}
	cout << ans;
	  
	return 0;
}
