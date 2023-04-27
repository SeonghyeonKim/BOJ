#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long a, b, c, d, e, f, g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	cout << a*b*e*f*g + c*d*e*f*g;
	
	return 0;
}
