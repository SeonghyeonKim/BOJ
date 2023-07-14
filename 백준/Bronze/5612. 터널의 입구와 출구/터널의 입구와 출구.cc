#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, m, flag=1;
	cin >> n >> m;
	
	int ans = m;
	
	for(int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		
		m = m + a - b;
		ans = max(ans, m);
		if(m<0) flag=0;	
	}
	
	if(flag) cout << ans;
	else cout << 0;
	
	return 0;	
}

