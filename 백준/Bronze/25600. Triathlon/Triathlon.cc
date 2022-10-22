#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int ans = 0;
	while(N--) {
		int a, d, g;
		cin >> a >> d >> g;
		
		ans = max(ans, a*(d+g));
		
		if(a==d+g) ans = max(ans, 2*a*(d+g));
	}	
	cout << ans;
	
	return 0;
}