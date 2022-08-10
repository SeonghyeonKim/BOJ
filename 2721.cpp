#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		long long int ans=0, n;
		cin >> n;
	
		for(int i=1; i<=n; i++) 
			ans += i*(i+1)*(i+2)/2;
		
		cout << ans << "\n"; 
	}
	
	return 0;
}
 
