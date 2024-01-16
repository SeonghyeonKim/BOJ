#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, x, y;
	cin >> a >> b >> x >> y;
	
	cout << min(abs(b-a) , min(abs(x-a) + abs(y-b), abs(x-b) + abs(y-a)));
	
	return 0;
}
