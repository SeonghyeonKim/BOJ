#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cout.precision(2);
	cout << fixed;
	
	while(1) {
		double a;
		int b, c;
		cin >> a >> b >> c;
	
		if(a==0 && b==0 && c==0) break;
		
		double W = 16*a/sqrt(337);
		double H = W*9/16;
		
		cout << "Horizontal DPI: " << b/W << "\nVertical DPI: " << c/H << "\n";
	}
	
	return 0;
}