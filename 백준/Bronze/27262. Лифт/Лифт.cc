#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << (b-1)*d + (a-1)*d << " " << (a-1)*c;
		
	return 0;
}
		
