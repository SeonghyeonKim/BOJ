#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	
	cout << a+c << " " << b+c << "\n";
	cout << a+c << " " << b-c << "\n";
	cout << a-c << " " << b-c << "\n";
	cout << a-c << " " << b+c << "\n";
 
	return 0;
}
