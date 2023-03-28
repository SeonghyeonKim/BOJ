#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	if(a+b+c>4) cout << 2;
	else cout << 1;
				
	return 0;
}