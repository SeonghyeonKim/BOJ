#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	while(1) {
		long long a;
		cin >> a;
		
		if(a==0) break;

		cout << a*(a+1)*(2*a+1)/6 << "\n";
	}	
	return 0;
}
