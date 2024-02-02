#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y, n, ansx=300, ansy=300, tmp=300;
	cin >> x >> y >> n;
	
	for(int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		
		int reg = abs(a-x) + abs(b-y);
		if(reg < tmp) {
			tmp = reg;
			ansx = a;
			ansy = b;
		}
	}
	
	cout << ansx << " " << ansy;

	return 0;
}
