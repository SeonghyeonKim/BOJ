#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a <= c) {
		if(b<=c && c<=d) {
			cout << b-a + d-c;
		}		
		else if(b > d) {
			cout << b-a;
		}
		else {
			cout << d-a;
		}
	} 
	else {
		if(a<=d && d<=b) {
			cout << b-c;	
		}	
		else if(a<=d) {
			cout << d-c;
		}
		else {
			cout << d-c + b-a;
		}
	}
   
    return 0;
}

