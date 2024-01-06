#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	vector<int> v(1001, 0);
	int tmp=0, cnt=0;
	for(int i=0; i<n; i++) {
		string s;
		long long a;
		cin >> s >> a;
		
		if(a <= 1000) {
			v[a]++;
			cnt++;
		}
		
		if(s=="jinju") tmp = a;
	}
	
	int ans = 0;
	for(int i=tmp+1; i<=1000; i++) {
		ans += v[i];
	}
	cout << tmp << "\n" << ans + (n - cnt);
	
    return 0;
}

