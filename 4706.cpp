#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	
	while(1) {
		double ta, tb;
		cin >> ta >> tb;
		
		if(ta==0 && tb==0) break;
		
		double y = pow(tb/ta, 2);
		
		printf("%.3f\n", sqrt(1.0-y));
	} 
	
	return 0;
}
