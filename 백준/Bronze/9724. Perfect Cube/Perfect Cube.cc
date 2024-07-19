#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	for(int t=1; t<=T; t++) {
		long long a, b, ans=0;
		cin >> a >> b;
		
		for(long long i=1; i<=b; i++) {
			if(b>=i*i*i && a<=i*i*i) ans++;
			else if(b<i*i*i) break;
		}
		
		printf("Case #%d: %d\n", t, ans);
	}
	   
	return 0;
}
