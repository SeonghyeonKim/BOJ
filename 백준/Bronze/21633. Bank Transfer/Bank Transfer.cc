#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	double k;
	cin >> k;
	
	cout.precision(2);
	cout << fixed;
	cout << min(max(100.0, 25+k*0.01), 2000.0);
	
	return 0;
}