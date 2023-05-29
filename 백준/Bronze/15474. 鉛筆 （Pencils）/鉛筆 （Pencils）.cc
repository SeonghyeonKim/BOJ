#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	
	int ans = 987654321;
	
	if(n%a) ans = min(ans,  (n/a+1)*b); 
	else ans = min(ans, n/a*b);
	
	if(n%c) ans = min(ans,  (n/c+1)*d); 
	else ans = min(ans, n/c*d);
	
	cout << ans;
	
	return 0;
}
