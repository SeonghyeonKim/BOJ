#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	
	int sum = (a+b+c)/3;
	cout << 2*c-3*sum+b;
	
	return 0;
}
