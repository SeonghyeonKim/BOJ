#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << 4 * max(b, a-b) * max(c, a-c);
 	
	return 0;
}