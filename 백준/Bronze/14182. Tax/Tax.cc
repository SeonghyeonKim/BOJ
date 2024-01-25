#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int a;
		cin >> a;
		
		if(a==0) break;
		
		if(a>=5000000) cout << a/100*80 << "\n";
		else if(a>=1000000) cout << a/100*90 << "\n";
		else cout << a << "\n";
	}
	
	return 0;
}
