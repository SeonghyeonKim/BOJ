#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	
	int ans = 0;
	
	for(int i=0; i<n; i++) {
		int ca=0, cb=0, cc=0;
		
		for(int j=0; j<3; j++) {
			int q, w, e;
			cin >> q >> w >> e;
			
			ca+=q;
			cb+=w;
			cc+=e;
		}
		
		ans = max(ans, ca*a+cb*b+cc*c);
	}
	
	cout << ans;
	
	return 0;
}
