#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	
	while(t--) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if(a*b > c*d) cout << "TelecomParisTech\n";
		else if(a*b==c*d) cout << "Tie\n";
		else cout << "Eurecom\n";
	}
	
	return 0;
}