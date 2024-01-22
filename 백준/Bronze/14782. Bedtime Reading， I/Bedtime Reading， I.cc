#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int ans=0, n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(n%i==0) ans+=i;	
	}
	cout << ans;
	
	return 0;
}
