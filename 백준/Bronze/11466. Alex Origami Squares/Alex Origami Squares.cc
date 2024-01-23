#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double h, w;
	cin >> h >> w;
	
	cout.precision(4);
	cout << fixed;
	
	double ans=0;
	if(h/3.0 <= w) ans = max(ans, h/3.0);
	if(h/2.0 <= w/2.0) ans = max(ans, h/2.0);
	if(h <= w/3.0) ans = max(ans, h);
	if(h/3.0 >= w) ans = max(ans, w);
	if(h/2.0 >= w/2.0) ans = max(ans, w/2.0);
	if(h >= w/3.0) ans = max(ans, w/3.0); 
	
	cout << ans;
 
	return 0;
}
