#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	double tmp1 = 10*a >= 5000 ? 10.0*b / (10.0*a-500.0) : 1.0*b/a;
	double tmp2 = 10*c >= 5000 ? 10.0*d / (10.0*c-500.0) : 1.0*d/c;
	double tmp3 = 10*e >= 5000 ? 10.0*f / (10.0*e-500.0) : 1.0*f/e;
	
	if(tmp1 > tmp2 && tmp1 > tmp3) cout << "S";
	else if(tmp2 > tmp1 && tmp2 > tmp3) cout << "N";
	else if(tmp3 > tmp1 && tmp3 > tmp2) cout << "U";
	
	return 0;
}
