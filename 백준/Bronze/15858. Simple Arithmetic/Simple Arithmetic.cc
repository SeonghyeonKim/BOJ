#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c;
	cin >> a >> b >> c;
	
	cout.precision(8);
	cout << fixed;
	
	long double ans = (long double)a/c;
	cout << ans * (long double)b;
	
	 
	return 0;
}