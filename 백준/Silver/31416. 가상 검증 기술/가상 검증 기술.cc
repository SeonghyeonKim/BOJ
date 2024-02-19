#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int Q;
	cin >> Q;
	
	while(Q--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		int ans = 987654321;
		
		for(int i=0; i<c; i++) {
			ans = min(ans, max(b*d + a*i, a*(c-i)));
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}