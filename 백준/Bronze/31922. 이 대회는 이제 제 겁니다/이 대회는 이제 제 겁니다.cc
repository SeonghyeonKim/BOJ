#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a+c, b);
	
	return 0;
}