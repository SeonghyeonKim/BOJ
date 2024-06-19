#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	cout.precision(10);
	cout << fixed;
	
	for(int t=1; t<=T; t++) {
		int N;
		cin >> N;
		
		double a, b, c, d;
		for(int i=0; i<N; i++) {
			double x, y;
			cin >> x >> y;
			
			if(i==0) {
				a = x;
				b = x;
				c = y;
				d = y;
			}
			else {
				a = max(x, a);
				b = min(x, b);
				c = max(y, c);
				d = min(y, d);
			}
		}
		
		cout << "Case " << t << ": Area " << abs((a-b)*(c-d)) << ", Perimeter " << abs(2*(a-b+c-d)) << "\n";
	}
	
	return 0;
}
