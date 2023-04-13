#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a;
	cin >> a;
	
	cout.precision(7);
	cout << fixed;
	cout << sqrt(a)*4;
				
	return 0;
}