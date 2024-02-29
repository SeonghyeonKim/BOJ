#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long n;
	cin >> n;
	
	long long ans = n;
	for(long long p=2; p*p<=n; p++) {
		if(n%p == 0) {
			ans = ans/p*(p-1);
			
			while(n%p==0) {
				n /= p;
			}
		}
	}
	
	if(n>1) ans = ans/n*(n-1);
	
	cout << ans;
	
	return 0;
}

