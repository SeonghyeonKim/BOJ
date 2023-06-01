#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double a, b, c;
	cin >> a >> b >> c;
	
	double q = 2.29 * 0.0324 * 2.0;
	double w = 2.97 * 0.0420 * 2.0;
	double e = 2.10 * 0.0297;
		
	cout.precision(4);
	cout << fixed;
	cout << q*a + w*b + e*c;
	
	return 0;
}


