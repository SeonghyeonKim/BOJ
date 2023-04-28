#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int i=b-a;
	int j=d-c;
	
	while(1) {
		if(i==j) {
			cout << i;
			break;
		}
		
		if(i>j) j+=d; 
		else i+=b;
	}

	
	return 0;
}
