#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		int dig = 10;
		while(a > dig) {
			a = int(floor(a + (dig/10*5)))/dig*dig;
			dig*=10;
		}
		
		cout << a << "\n";
	}	
	
	return 0;
}
