#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long int a, b, c;
	cin >> a >> b >> c;
	
	cout << ((a+c-1)/c) * ((b+c-1)/c);
	
	return 0;
}
