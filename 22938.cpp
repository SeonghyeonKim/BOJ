#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	
	double ans = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	
	if(ans < (r1+r2)*(r1+r2)) cout << "YES";
	else cout << "NO";	
	
	return 0;
}
